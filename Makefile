# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022\10/03 21:50:13 by elakhfif          #+#    #+#              #
#    Updated: 2022/10/25 06:53:27 by elakhfif         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
CC = gcc
RM = rm -rf
INC = libft.h								
SRC =		ft_isalpha.c\
	 		ft_isdigit.c\
			ft_isalnum.c\
			ft_isascii.c\
			ft_isprint.c\
			ft_putchar_fd.c\
			ft_putstr_fd.c\
			ft_putendl_fd.c\
			ft_strlen.c\
			ft_memcpy.c\
			ft_strdup.c\
			ft_toupper.c\
			ft_bzero.c\
			ft_memchr.c\
			ft_memmove.c\
			ft_strlcat.c\
			ft_strrchr.c\
			ft_memcmp.c\
			ft_memset.c\
			ft_strlcpy.c\
			ft_tolower.c\
			ft_strchr.c\
			ft_atoi.c\
			ft_strtrim.c\
			ft_strnstr.c\
			ft_substr.c\
			ft_calloc.c\
			ft_strjoin.c\
			ft_split.c\
			ft_itoa.c\
			ft_putnbr_fd.c\
			ft_striteri.c\
			ft_strncmp.c\
			ft_strmapi.c\

BONUSSRC = 	ft_lstnew_bonus.c\
			ft_lstadd_front_bonus.c\
			ft_lstsize_bonus.c\
			ft_lstlast_bonus.c\
			ft_lstadd_back_bonus.c\
			ft_lstdelone_bonus.c\
			ft_lstclear_bonus.c\
			ft_lstiter_bonus.c\
			ft_lstmap_bonus.c\

OBJ = $(SRC:%.c=%.o)

OBJBONUS = $(BONUSSRC:%.c=%.o)

all : $(NAME)

$(NAME) : $(OBJ)
		ar rc $(NAME) $(OBJ)

%.o : %.c $(INC)													
		gcc -c $(CFLAGS) $< -o $@

bonus : $(OBJBONUS)
		ar rc $(NAME) $(OBJBONUS)

clean :
		@rm -rf $(OBJBONUS) $(OBJ)

fclean :
		@rm -f $(NAME) $(OBJBONUS) $(OBJ)

re : fclean all
