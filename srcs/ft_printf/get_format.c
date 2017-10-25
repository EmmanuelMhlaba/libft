/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_format.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmhla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/18 17:37:32 by emmmhla           #+#    #+#             */
/*   Updated: 2017/06/18 17:54:16 by emmmhla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	get_specifier(const char *format_str, t_format *format)
{
	if (format_str[0] == 's')
		format->specifier = STRING;
	else if (format_str[0] == 'd' || format_str[0] == 'i')
		format->specifier = INTEGER;
	else if (format_str[0] == 'p')
		format->specifier = POINTER;
	else if (format_str[0] == '%')
		format->specifier = PERCENTAGE;
	else if (format_str[0] == 'c')
		format->specifier = CHAR;
	else
		return (ERROR);
	return (1);
}

int			get_format(const char *format_str, t_format *format)
{
	int	tmp;

	tmp = get_specifier(format_str, format);
	if (tmp == ERROR)
		return (-1);
	return (tmp + 1);
}
