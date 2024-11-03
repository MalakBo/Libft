# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbouyi <mbouyi@student.1337.ma>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/02 16:22:36 by mbouyi            #+#    #+#              #
#    Updated: 2024/11/03 17:00:11 by mbouyi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror

FU = ft_isalpha \
     ft_isdigit \
     ft_isalnum \
     ft_isascii \
     ft_isprint \
     ft_strlen \
     ft_memset \
     ft_bzero \
     ft_memcpy \
     ft_memmove \
     ft_strlcpy \
     ft_strlcat \
     ft_toupper \
     ft_tolower \
     ft_strchr \
     ft_strrchr \
     ft_strncmp \
     ft_memchr \
     ft_memcmp \
     ft_strnstr \
     ft_atoi \
     ft_calloc \
     ft_strdup \
     ft_strjoin \
     ft_strtrim \
     ft_split \
     ft_itoa \
     ft_strmapi \
     ft_striteri \
     ft_putchar_fd \
     ft_putstr_fd \
     ft_putendl_fd \
     ft_putnbr_fd

FUN = $(FU:=.c)
OBJ = $(FU:=.o)

BONUS = ft_lstnew \
        ft_lstadd_front \
        ft_lstsize \
        ft_lstlast \
        ft_lstadd_back \
        ft_lstdelone \
        ft_lstclear \
        ft_lstiter \
        ft_lstmap 

BONUSFUN = $(BONUS:=.c)
BONUSOBJ = $(BONUS:=.o)

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

bonus: $(NAME) $(BONUSOBJ)

$(BONUSOBJ): $(BONUSFUN)
	$(CC) $(CFLAGS) -c $(BONUSFUN)
	ar rcs $(NAME) $(BONUSOBJ)

clean:
	@rm -rf $(OBJ) $(BONUSOBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all re fclean clean bonus