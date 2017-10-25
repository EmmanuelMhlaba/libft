/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_in_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmhla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/18 18:10:32 by emmmhla           #+#    #+#             */
/*   Updated: 2017/06/18 18:18:49 by emmmhla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		print_in_format(t_format *format, va_list args)
{
	if (format->specifier == STRING)
		return (print_string(va_arg(args, char*), format));
	else if (format->specifier == INTEGER)
		return (print_integer(va_arg(args, int), format));
	return (ERROR);
}
