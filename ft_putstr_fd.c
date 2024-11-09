/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyi <mbouyi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 14:52:46 by mbouyi            #+#    #+#             */
/*   Updated: 2024/10/28 16:12:33 by mbouyi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
}
/*int main(void){
	int fd3 = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	printf("%d\n",fd3);
	int fd = open("output22.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	printf("%d\n",fd);
	return (0);
}*/
