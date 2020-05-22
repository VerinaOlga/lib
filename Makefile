# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jedelmir <marvin@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/15 16:22:06 by jedelmir          #+#    #+#              #
#    Updated: 2020/05/19 23:31:48 by jedelmir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEADER = libft.h

FLAGS = -Wall -Werror -Wextra -c

SRC = ft_strlen.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strlcpy.c \
ft_isdigit.c ft_isprint.c ft_toupper.c ft_tolower.c ft_isalnum.c ft_isalpha.c \
ft_isascii.c ft_memcpy.c ft_memset.c ft_calloc.c ft_atoi.c ft_memccpy.c \
ft_bzero.c ft_memchr.c ft_memmove.c ft_memcmp.c ft_strdup.c ft_strjoin.c \
ft_putchar_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_strnstr.c \
ft_strlcat.c ft_strmapi.c ft_substr.c ft_strtrim.c ft_itoa.c ft_split.c \

OBJ = $(SRC:c=o)

BONUSRC = ft_lstnew.c ft_lstadd_front.c ft_lstlast.c ft_lstadd_back.c \
ft_lstdelone.c ft_lstsize.c ft_lstclear.c ft_lstiter.c ft_lstiter.c

BONUSOBJ = $(BONUSRC:c=o)

all: $(NAME)

%.o:%.c
		gcc $(FLAGS) $<

$(NAME):
		gcc $(FLAGS) $(SRC)
		ar rcs $(NAME) $(OBJ)

bonus:
		gcc $(FLAGS) $(BONUSRC)
		ar rcs $(NAME) $(BONUSOBJ)
clean:
		rm -f $(OBJ)
		rm -f $(BONUSOBJ)
fclean: clean
		rm -f $(NAME)
re: fclean all