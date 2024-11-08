# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mac <mac@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/02 16:22:36 by mbouyi            #+#    #+#              #
#    Updated: 2024/11/05 18:12:12 by mac              ###   ########.fr        #
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
     ft_substr.c \
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

BONUS = ft_lstnew_bonus.c \
        ft_lstadd_front_bonus.c \
        ft_lstsize_bonus.c \
        ft_lstlast_bonus.c \
        ft_lstmap_bonus.c \
        ft_lstadd_back_bonus.c \
        ft_lstdelone_bonus.c \
        ft_lstclear_bonus.c \
        ft_lstiter_bonus.c 


OBJB = $(BONUS:.c=.o)

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

bonus: $(NAME) $(OBJB)

bonus: $(OBJ) $(OBJB)
	ar rcs $(NAME) $(OBJB)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	@rm -rf $(OBJ) $(OBJB)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
