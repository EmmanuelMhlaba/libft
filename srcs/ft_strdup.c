/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmhla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 10:32:07 by emmmhla           #+#    #+#             */
/*   Updated: 2017/06/22 12:17:13 by emmmhla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	loop;
	size_t	s1_len;

	loop = 0;
	s1_len = ft_strlen(s1);
	s2 = ft_strnew(s1_len);
	if (s2 != NULL)
	{
		s2[s1_len] = '\0';
		while (loop < s1_len)
		{
			s2[loop] = s1[loop];
			loop++;
		}
		return (s2);
	}
	return (NULL);
}
