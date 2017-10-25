/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmhla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/18 16:17:27 by emmmhla           #+#    #+#             */
/*   Updated: 2017/06/18 17:59:56 by emmmhla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft.h"

# define ERROR -1

# define STRING 0
# define INTEGER 1
# define POINTER 2
# define PERCENTAGE 3
# define CHAR 4

typedef struct	s_format
{
	int			specifier;
	char		flags[5];
	int			width;
	int			precision;
	char		length;
}				t_format;

int				ft_printf_fd(const int fd, const char *format_str, ...);
int				ft_printf(const char *format_str, ...);
int				get_format(const char *format_str, t_format *format);
int				print_in_format(t_format *format, va_list args);
int				print_string(char *str, t_format *format);
int				print_integer(int i, t_format *format);
int				print_pointer(size_t address, t_format *format);
int				print_char(char c, t_format *format);

#endif
