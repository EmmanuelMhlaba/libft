NAME = libft.a
CC = gcc
CCFLAGS = -Wall -Werror -Wextra
SRC_FOLDER = src
INCLUDE_FOLDER = include
SRC = $(wildcard $(SRC_FOLDER)/*.c)
OBJ = $(SRC:.c=.o)
INCLUDE = $(wildcard $(INCLUDE_FOLDER)/*.h)

TEST_MAIN = test.c
TEST = test

all: $(NAME) $(TEST)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

%.o: %.c $(INCLUDE)
	$(CC) $(CCFLAGS) -c $< -I $(INCLUDE_FOLDER) -o $@

$(TEST): $(NAME) $(INCLUDE) $(TEST_MAIN)
	$(CC) $(CCFLAGS) $(TEST_MAIN) -I $(INCLUDE_FOLDER) -L . -lft -o $(TEST)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f $(TEST)

re: fclean all

.PHONY: all clean fclean re test
