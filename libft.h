/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyi <mbouyi@student.1337.ma>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 20:56:02 by mbouyi            #+#    #+#             */
/*   Updated: 2024/10/24 20:56:05 by mbouyi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdint.h>
# include <stddef.h>
# include <string.h>
# include <stdio.h>


int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_tolower(int c);
size_t	ft_strlen(char *str);
int		ft_toupper(int c);
char	*ft_strchr(char *s, int c);
void	ft_bzero(void *s, size_t n);
char	*ft_strrchr(char *s, int c);
void	*ft_memcpy(void *dest, void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
int		ft_strncmp(char *s1, char *s2, size_t n);
void	*ft_memchr(void *s, int c, size_t n);
int		ft_memcmp(void *s1, void *s2, size_t n);
void	*ft_memmove(void *dest, void *src, size_t n);
size_t	ft_strlcpy(char *dst, char *src, size_t size);
size_t	ft_strlcat(char *dst, char *src, size_t size);
char	*ft_strnstr(char *big, char *little, size_t len);
int	ft_atoi(char *nptr);
#endif
