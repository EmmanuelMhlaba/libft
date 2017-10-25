/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_integer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmhla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/19 08:31:40 by emmmhla           #+#    #+#             */
/*   Updated: 2017/06/19 08:36:07 by emmmhla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_integer(int i, t_format *format)
{
	char	*tmp;
	int		len;

	tmp = ft_itoa(i);
	len = ft_strlen(tmp);
	if (format->specifier == INTEGER)
		ft_putstr(tmp);
	ft_strdel(&tmp);
	return (len);
}
