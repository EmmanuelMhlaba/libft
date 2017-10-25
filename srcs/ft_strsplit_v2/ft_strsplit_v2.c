/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit_v2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmhla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 10:11:21 by emmmhla           #+#    #+#             */
/*   Updated: 2017/07/13 10:11:53 by emmmhla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strsplit_v2.h"

static void	copy_contents(char ***res, char *str, int *loop, int *strs)
{
	int		chars;
	char	c;

	c = str[(loop[0])++];
	chars = 0;
	while (str[loop[0]] != '\0' && str[loop[0]] != c)
		res[0][strs[0]][chars++] = str[(loop[0])++];
	(strs[0])++;
	(loop[0])++;
}

char		**ft_strsplit_v2(char *str, char d)
{
	char	**result;
	int		loop;
	int		strings;
	int		chars;

	loop = 0;
	strings = 0;
	mem_for_str_split(&result, str, d);
	while (str[loop] != '\0')
		if (str[loop] != d)
		{
			if (str[loop] != '\'' && str[loop] != '"')
			{
				chars = 0;
				while (str[loop] != '\0' && str[loop] != d)
					result[strings][chars++] = str[loop++];
				strings++;
			}
			else
				copy_contents(&result, str, &loop, &strings);
		}
		else
			loop++;
	return (result);
}
