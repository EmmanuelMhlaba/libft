/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dupstrs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmhla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/21 16:44:51 by emmmhla           #+#    #+#             */
/*   Updated: 2017/06/22 12:22:24 by emmmhla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_dupstrs(const char **strs)
{
	char	**new;
	size_t	len;
	size_t	loop;

	len = ft_countstrs(strs);
	new = (char**)ft_memalloc(sizeof(char*) * (len + 1));
	if (new == NULL)
		return (NULL);
	new[len] = (char*)'\0';
	loop = 0;
	while (strs[loop] != '\0')
	{
		new[loop] = ft_strdup(strs[loop]);
		loop++;
	}
	return (new);
}
