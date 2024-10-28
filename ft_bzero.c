/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyi <mbouyi@student.1337.ma>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 21:27:20 by mbouyi            #+#    #+#             */
/*   Updated: 2024/10/24 21:27:23 by mbouyi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	if (!s || (ssize_t)n < 0)
		return ;
	if (n > ft_strlen(s))
		n = ft_strlen(s);
	while (i < n)
	{
		((unsigned char *)s)[i] = 0;
		i++;
	}
}
/*int main(){
	char str[50] = "Malak hhhhhhhhhhhhhh";
	ft_bzero(str,-2);
	printf("%s",str);
	return (0);
}*/
