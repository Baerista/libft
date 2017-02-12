# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: irhett <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/12 20:58:56 by irhett            #+#    #+#              #
#    Updated: 2017/02/11 17:43:58 by irhett           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a
CC			=	gcc
FLAGS		=	-Wall -Werror -Wextra -c
LIB			=	ar rc
RLIBi		=	ranlib
SRC_FILE	=	ft_atoi.c ft_bubblesort_intarr.c ft_bzero.c ft_findbiggest.c \
				ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
				ft_islower.c ft_isprint.c ft_isspace.c ft_isupper.c ft_itoa.c \
				ft_lstadd.c ft_lstdel.c ft_lstdelone.c ft_lstiter.c \
				ft_lstmap.c ft_lstnew.c ft_memalloc.c ft_memccpy.c \
				ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memdel.c ft_memmove.c \
				ft_memset.c ft_numwords.c ft_putchar.c ft_putchar_fd.c \
				ft_putendl.c ft_putendl_fd.c ft_putnbr.c ft_putnbr_fd.c \
				ft_putstr.c ft_putstr_fd.c ft_strcapwords.c ft_strcat.c \
				ft_strchr.c ft_strclr.c ft_strcmp.c ft_strcpy.c ft_strdel.c \
				ft_strdup.c ft_strequ.c ft_striter.c ft_striteri.c \
				ft_strjoin.c ft_strlcat.c ft_strlen.c ft_strmap.c \
				ft_strmapi.c ft_strncat.c ft_strncmp.c ft_strncpy.c \
				ft_strnequ.c ft_strnew.c ft_strnstr.c ft_strrchr.c \
				ft_strsplit.c ft_strstr.c ft_strsub.c ft_strtolower.c \
				ft_strtoupper.c ft_strtrim.c ft_swap.c ft_tolower.c \
				ft_toupper.c ft_wordlen.c get_next_line.c gnl_concat.c
SRC_DIR		= 	src
SRCS		=	$(addprefix $(SRC_DIR), $(SRC_FILE))
OBJ_FILE	=	$(SRC_FILE:.c=.o)
OBJ_DIR		=	obj
OBJS		=	$(addprefix $(OBJ_DIR), $(OBJ_FILE))

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRCS)
	$(LIB) $(NAME) $(SRCS_O)
	$(RLIB) $(NAME)

clean:
	rm -f $(SRCS_O)

fclean: clean
	rm -f libft.a

re:	fclean all