/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_deletestrs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmhla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/21 16:58:09 by emmmhla           #+#    #+#             */
/*   Updated: 2017/06/21 17:08:18 by emmmhla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_deletestrs(char ***strs)
{
	int		loop;

	loop = 0;
	while ((*strs)[loop] != '\0')
	{
		ft_strdel(&((*strs)[loop]));
		loop++;
	}
	free(*strs);
	*strs = NULL;
}
