# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbouyi <mbouyi@student.1337.ma>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/02 16:22:36 by mbouyi            #+#    #+#              #
#    Updated: 2024/11/03 18:43:48 by mbouyi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_isalpha.c \
     ft_isdigit.c \
     ft_isalnum.c \
     ft_isascii.c \
     ft_isprint.c \
     ft_strlen.c\
     ft_memset.c \
     ft_bzero.c \
     ft_memcpy.c \
     ft_memmove.c \
     ft_strlcpy.c \
     ft_strlcat.c \
     ft_toupper.c \
     ft_tolower.c \
     ft_strchr.c \
     ft_strrchr.c \
     ft_strncmp.c \
     ft_memchr.c \
     ft_memcmp.c \
     ft_strnstr.c \
     ft_atoi.c \
     ft_calloc.c \
     ft_strdup.c \
     ft_strjoin.c \
     ft_strtrim.c \
     ft_split.c \
     ft_itoa.c \
     ft_strmapi.c \
     ft_striteri.c \
     ft_putchar_fd.c \
     ft_putstr_fd.c \
     ft_putendl_fd.c \
     ft_putnbr_fd.c 

OBJ = $(SRCS:.c=.o)

BONUS = ft_lstnew.c \
        ft_lstadd_front.c \
        ft_lstsize.c \
        ft_lstlast.c \
        ft_lstadd_back.c \
        ft_lstdelone.c \
        ft_lstclear.c \
        ft_lstiter.c \
        ft_lstmap.c 


OBJB = $(BONUS:.c=.o)

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

bonus: $(NAME) $(OBJB)

$(OBJB): $(BONUS)
	$(CC) $(CFLAGS) -c $(BONUS)
	ar rcs $(NAME) $(OBJB)
%.o: %.c
	$(CC) $(CFLAGS) -c $<
clean:
	@rm -rf $(OBJ) $(OBJB)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
