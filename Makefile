NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRC_DIR = /Users/jojeda-m/Desktop/libft
SRC = $(shell find $(SRC_DIR) -type f -name "*.c")
OBJ = $(SRC:.c=.o)
INCLUDE = libft.h

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDE)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

