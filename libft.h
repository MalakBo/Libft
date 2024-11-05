/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyi <mbouyi@student.1337.ma>                      +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 20:56:02 by mbouyi            #+#    #+#             */
/*   Updated: 2024/10/24 20:56:05 by mbouyi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <fcntl.h>
# include <stddef.h>
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
int					ft_tolower(int c);
size_t				ft_strlen(const char *str);
int					ft_toupper(int c);
char				*ft_strchr(char *s, int c);
void				ft_bzero(void *s, size_t n);
char				*ft_strrchr(char *s, int c);
void				*ft_memcpy(void *dest, void *src, size_t n);
void				*ft_memset(void *s, int c, size_t n);
int					ft_strncmp(char *s1, char *s2, size_t n);
void				*ft_memchr(void *s, int c, size_t n);
int					ft_memcmp(void *s1, void *s2, size_t n);
void				*ft_memmove(void *dest, void *src, size_t n);
size_t				ft_strlcpy(char *dst, char *src, size_t size);
size_t				ft_strlcat(char *dst, char *src, size_t size);
char				*ft_strnstr(char *big, char *little, size_t len);
int					ft_atoi(char *nptr);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char *s1, char *s2);
char				*ft_strtrim(char *s1, char *set);
char				**ft_split(char *s, char c);
char				*ft_itoa(int n);
char				*ft_strmapi(char *s, char (*f)(unsigned int, char));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;
t_list				*ft_lstnew(void *content);
void				ft_lstadd_front(t_list **lst, t_list *new);
int					ft_lstsize(t_list *lst);
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstadd_back(t_list **lst, t_list *new);
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));
t_list				*ft_lstlast(t_list *lst);
void				ft_lstiter(t_list *lst, void (*f)(void *));
void				ft_lstdelone(t_list *lst, void (*del)(void *));

#endif
