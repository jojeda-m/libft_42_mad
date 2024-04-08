# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jojeda-m <jojeda-m@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/27 15:22:13 by jojeda-m          #+#    #+#              #
#    Updated: 2024/04/08 14:37:20 by jojeda-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
INCLUDE	= libft.h
SRC		= \
		  ft_atoi.c\
		  ft_bzero.c\
		  ft_calloc.c\
		  ft_isalnum.c\
		  ft_isalpha.c\
		  ft_isascii.c\
		  ft_isdigit.c\
		  ft_isprint.c\
		  ft_itoa.c\
		  ft_memchr.c\
		  ft_memcmp.c\
		  ft_memcpy.c\
		  ft_memmove.c\
		  ft_memset.c\
		  ft_putchar_fd.c\
		  ft_putendl_fd.c\
		  ft_putnbr_fd.c\
		  ft_putstr_fd.c\
		  ft_split.c\
		  ft_strchr.c\
		  ft_strdup.c\
		  ft_striteri.c\
		  ft_strjoin.c\
		  ft_strlcat.c\
		  ft_strlcpy.c\
		  ft_strlen.c\
		  ft_strmapi.c\
		  ft_strncmp.c\
		  ft_strnstr.c\
		  ft_strrchr.c\
		  ft_strtrim.c\
		  ft_substr.c\
		  ft_tolower.c\
		  ft_toupper.c

OBJ		= $(SRC:.c=.o)

BONUS	= \
		  ft_lstnew.c\
		  ft_lstadd_front.c\
		  ft_lstsize.c\
		  ft_lstlast.c\
		  ft_lstadd_back.c\
		  ft_lstdelone.c

B_OBJ	= $(BONUS:.c=.o)

all 	: $(NAME)

$(NAME) : $(OBJ) $(INCLUDE)
	@ar rcs $(NAME) $(OBJ)

bonus: $(B_OBJ)
	@ar -crs $(NAME) $(B_OBJ)

%.o		: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean	:
	@rm -f $(OBJ) $(B_OBJ)

fclean	: clean
	@rm -f $(NAME)

re		: fclean all

.PHONY	: all clean fclean re
