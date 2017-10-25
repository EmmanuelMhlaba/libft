/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit_v2.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmhla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 10:12:27 by emmmhla           #+#    #+#             */
/*   Updated: 2017/07/13 10:14:49 by emmmhla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRSPLIT_V2_H
# define FT_STRSPLIT_V2_H

# include "libft.h"

char	**ft_strsplit_v2(char *str, char d);
void	mem_for_str_split(char ***result, char *str, char delimiter);

#endif
