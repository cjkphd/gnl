# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mamateo <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/07 17:20:41 by mamateo           #+#    #+#              #
#    Updated: 2019/01/03 18:35:13 by mamateo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

HEADER = libft.h

CFLAGS = -Wall -Wextra -Werror -c

CFILES = ft_atoi.c ft_bzero.c ft_cpytill.c\
		 ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c\
		 ft_lstadd.c ft_lstnew.c\
		 ft_memalloc.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memdel.c ft_memmove.c ft_memset.c\
		 ft_putchar.c ft_putchar_fd.c ft_putendl.c ft_putendl_fd.c ft_putnbr.c ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c\
		 ft_strcat.c ft_strchr.c ft_strclr.c ft_strcmp.c ft_strcpy.c ft_strdel.c ft_strdup.c ft_strequ.c ft_striter.c ft_striteri.c\
		 ft_strjoin.c ft_strjoinch.c ft_strlcat.c ft_strlen.c ft_strlen_fd.c ft_strmap.c ft_strmapi.c ft_strncat.c ft_strncmp.c ft_strncpy.c\
		 ft_strnequ.c ft_strnew.c ft_strnstr.c ft_strrchr.c ft_strsplit.c ft_strstr.c ft_strsub.c ft_strtrim.c ft_swap.c\
		 ft_tolower.c ft_toupper.c ft_whitespace.c\
		 
OBJECTS = $(CFILES:*.c=.o)

all: $(NAME)

$(NAME):
	@echo Compiling...
	@$(CC) $(CFLAGS) $(CFILES) -I $(HEADER)
	@ar rc $(NAME) *.o
	@ranlib $(NAME)

clean:
	@echo Cleaning files...
	@/bin/rm -f *.o
	
fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
