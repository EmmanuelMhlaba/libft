# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emmmhla <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/06/16 11:42:47 by emmmhla           #+#    #+#              #
#    Updated: 2017/07/13 10:46:20 by emmmhla          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CCFLAGS = -Wall -Werror -Wextra -c

NAME = libft.a

HEADER_FOLDER = includes
HEADER = libft.h
PRINTF_HEADER = ft_printf.h
STRSPLIT_V2_HEADER = ft_strsplit_v2.h

SRC_FOLDER = srcs
PRINTF_SRC_FOLDER = $(SRC_FOLDER)/ft_printf
STRSPLIT_V2_SRC_FOLDER = $(SRC_FOLDER)/ft_strsplit_v2

OBJ_FOLDER = objs
_OBJ = \
	  ft_atoi.o ft_bzero.o ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o \
	  ft_isprint.o ft_itoa.o ft_itoa_base.o ft_lstadd.o ft_lstdel.o \
	  ft_lstdelone.o ft_lstiter.o ft_lstmap.o ft_lstnew.o ft_memalloc.o \
	  ft_memccpy.o ft_memchr.o ft_memcmp.o ft_memcpy.o ft_memdel.o \
	  ft_memmove.o ft_memset.o ft_putchar.o ft_putchar_fd.o ft_putendl.o \
	  ft_putendl_fd.o ft_putnbr.o ft_putnbr_fd.o ft_putstr.o ft_putstr_fd.o \
	  ft_strcat.o ft_strchr.o ft_strclr.o ft_strcmp.o ft_strcpy.o ft_strdel.o \
	  ft_strdup.o ft_strequ.o ft_striter.o ft_striteri.o ft_strjoin.o \
	  ft_strlcat.o ft_strlen.o ft_strmap.o ft_strmapi.o ft_strncat.o \
	  ft_strncmp.o ft_strncpy.o ft_strnequ.o ft_strnew.o ft_strnstr.o \
	  ft_strrchr.o ft_strrev.o ft_strsplit.o ft_strstr.o ft_strsub.o \
	  ft_strtrim.o ft_tolower.o ft_toupper.o ft_dupstrs.o ft_deletestrs.o \
	  ft_countstrs.o
OBJ = $(patsubst %.o, $(OBJ_FOLDER)/%.o, $(_OBJ))

PRINTF_OBJ_FOLDER = $(OBJ_FOLDER)/ft_printf
_PRINTF_OBJ = \
		ft_printf.o get_format.o print_in_format.o print_string.o \
		print_integer.o	
PRINTF_OBJ = $(patsubst %.o, $(PRINTF_OBJ_FOLDER)/%.o, $(_PRINTF_OBJ))

STRSPLIT_V2_OBJ_FOLDER = $(OBJ_FOLDER)/ft_strsplit_v2
_STRSPLIT_V2_OBJ = \
				   mem_for_str_split.o ft_strsplit_v2.o
STRSPLIT_V2_OBJ = $(patsubst %.o, $(STRSPLIT_V2_OBJ_FOLDER)/%.o, $(_STRSPLIT_V2_OBJ))

all: $(NAME)

$(NAME): $(OBJ_FOLDER) $(PRINTF_OBJ_FOLDER) $(STRSPLIT_V2_OBJ_FOLDER) $(OBJ) $(PRINTF_OBJ) $(STRSPLIT_V2_OBJ)
	@ar rc $(NAME) $(OBJ) $(PRINTF_OBJ) $(STRSPLIT_V2_OBJ)
	@ranlib $(NAME)

$(OBJ_FOLDER)/%.o: $(SRC_FOLDER)/%.c $(HEADER_FOLDER)/$(HEADER)
	@$(CC) $(CCFLAGS) $< -o $@ -I $(HEADER_FOLDER)

$(PRINTF_OBJ_FOLDER)/%.o: $(PRINTF_SRC_FOLDER)/%.c $(HEADER_FOLDER)/$(PRINTF_HEADER)
	@$(CC) $(CCFLAGS) $< -o $@ -I $(HEADER_FOLDER)

$(STRSPLIT_V2_OBJ_FOLDER)/%.o: $(STRSPLIT_V2_SRC_FOLDER)/%.c $(HEADER_FOLDER)/$(STRSPLIT_V2_HEADER)
	@$(CC) $(CCFLAGS) $< -o $@ -I $(HEADER_FOLDER)

$(OBJ_FOLDER):
	@mkdir $@

$(PRINTF_OBJ_FOLDER): $(OBJ_FOLDER)
	@mkdir $@

$(STRSPLIT_V2_OBJ_FOLDER): $(OBJ_FOLDER)
	@mkdir $@

clean:
	@rm -rf $(OBJ_FOLDER)

fclean: clean
	@rm -f $(NAME)

re: fclean all

norme:
	@$(foreach SRC_FILE, $(patsubst %.o, $(SRC_FOLDER)/%.c, $(_OBJ)), norminette $(SRC_FILE);)
	@echo ""
	@$(foreach SRC_FILE, $(patsubst %.o, $(PRINTF_SRC_FOLDER)/%.c, $(_PRINTF_OBJ)), norminette $(SRC_FILE);)
	@echo ""
	@$(foreach SRC_FILE, $(patsubst %.o, $(STRSPLIT_V2_SRC_FOLDER)/%.c, $(_STRSPLIT_V2_OBJ)), norminette $(SRC_FILE);)
	@echo ""
	@norminette $(HEADER_FOLDER)

.PHONY: clean fclean re all norme
