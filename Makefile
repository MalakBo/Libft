# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbouyi <mbouyi@student.1337.ma>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/02 16:22:36 by mbouyi            #+#    #+#              #
#    Updated: 2024/11/14 21:03:18 by mbouyi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Source files
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
# Object files 
OBJ = $(SRCS:.c=.o)

# Bonus source files
BONUS = ft_lstnew_bonus.c \
        ft_lstadd_front_bonus.c \
        ft_lstsize_bonus.c \
        ft_lstlast_bonus.c \
        ft_lstmap_bonus.c \
        ft_lstadd_back_bonus.c \
        ft_lstdelone_bonus.c \
        ft_lstclear_bonus.c \
        ft_lstiter_bonus.c 

# Bonus object files
OBJB = $(BONUS:.c=.o)
# The name of the library
NAME = libft.a
# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror
# Builds the library
all: $(NAME)
# Rule to create the library (NAME) from object files (OBJ)
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ) 
# Bonus target: adds bonus object files (OBJB) to the library
bonus: $(OBJB)
	ar rcs $(NAME) $(OBJB)
# Compiles .c to .o with given flags
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
# Removes all object files
clean:
	rm -rf $(OBJ) $(OBJB)
# Removes object files and the library file
fclean: clean
	rm -rf $(NAME)
# Rebuild target.
re: fclean all
