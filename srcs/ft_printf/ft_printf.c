/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmhla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/18 17:34:30 by emmmhla           #+#    #+#             */
/*   Updated: 2017/06/19 08:53:55 by emmmhla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	put_char(const char c)
{
	ft_putchar(c);
	return (1);
}

int			ft_printf(const char *format_str, ...)
{
	t_format	format;
	va_list		args;
	int			l_p_t[3];

	va_start(args, format_str);
	l_p_t[0] = 0;
	l_p_t[1] = 0;
	while (format_str[l_p_t[0]] != '\0')
	{
		if (format_str[l_p_t[0]] == '%')
		{
			l_p_t[2] = get_format(&format_str[l_p_t[0] + 1], &format);
			if (l_p_t[2] == ERROR)
				return (-1);
			l_p_t[0] += l_p_t[2];
			l_p_t[1] += print_in_format(&format, args);
		}
		else
		{
			l_p_t[1] += put_char(format_str[l_p_t[0]]);
			(l_p_t[0])++;
		}
	}
	va_end(args);
	return (l_p_t[1]);
}
