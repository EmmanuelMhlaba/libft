/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmhla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/18 18:15:53 by emmmhla           #+#    #+#             */
/*   Updated: 2017/06/18 18:17:42 by emmmhla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		print_string(char *str, t_format *format)
{
	if (format->specifier == STRING)
		ft_putstr(str);
	return (ft_strlen(str));
}
