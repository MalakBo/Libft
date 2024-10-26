/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 20:59:35 by mbouyi            #+#    #+#             */
/*   Updated: 2024/10/24 20:59:38 by mbouyi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>
#include<string.h>

void	*ft_memcpy(void *dest, void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest || !src || !n)
		return (0);
	while (i < n && ((unsigned char *)src)[i])
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
int main()
{
    char src1[] = "012346789qwertyu";
    memcpy(src1 + 2, src1, 10);  
    printf("Standard memcpy: %s\n", src1);

    char src2[] = "012346789qwertyu";
    ft_memcpy(src2 + 2, src2, 10);  
    printf("Custom ft_memcpy: %s\n", src2);
}