# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmatulud <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/22 10:45:49 by kmatulud          #+#    #+#              #
#    Updated: 2019/05/22 16:02:34 by kmatulud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEAD = libft.h
Flags = -Wall -Werror -Wextra -c
CC = gcc
FILES = ft_strlen.c ft_putchar.c ft_isdigit.c ft_isalpha.c ft_memset.c ft_bzero.c
	   ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strdup.c ft_strcpy.c
       ft_strncpy.c ft_strcat.c ft_strncat.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strstr.c
	   ft_strnstr.c ft_strcmp.c ft_strncmp.c ft_atoi.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c
	   
OBJECTS = ft_strlen.o ft_putchar.o ft_isdigit.o ft_isalpha.o ft_memset.o ft_bzero.o ft_memcpy.o ft_memccpy.o ft_memmove.o ft_memchr.o
          ft_memcmp.o ft_strdup.o ft_strcpy.o ft_strncpy.o ft_strcat.o ft_strncat.o ft_strlcat.o ft_strchr.o ft_strrchr.o
		  ft_strstr.o ft_strnstr.o ft_strcmp.o ft_strncmp.o ft_atoi.o ft_isdigit.o ft_isalnam.o ft_isascci.o ft_isprint.o ft_toupper.o 			 ft_tolower.o

ALL : $(NAME)

$(NAME): $(SRCS) libft.h

	@gcc -Wall -Wextra -Werror -I$(INCLUDES) -c $(SRCS)
	@ar rc $(NAME) $(OBJECTS)

clean:
	rm -f $(OBJ)
	rm -f $(FILES) 

fclean: clean
	rm -f $(NAME)

re: fclean all
