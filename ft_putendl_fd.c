/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyi <mbouyi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 14:58:34 by mbouyi            #+#    #+#             */
/*   Updated: 2024/11/09 16:12:05 by mbouyi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
/*int main(void)
{
    int fd;
    fd = open("test.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    ft_putendl_fd("First line in file", fd);
    ft_putendl_fd("Second line in file", fd);
    close(fd);
	return 0;
}*/