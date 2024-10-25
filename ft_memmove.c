/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:57:48 by mbouyi            #+#    #+#             */
/*   Updated: 2024/10/25 17:57:50 by mbouyi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, void *src, size_t n)
{
	if (!dest || !src || !n)
		return (0);
	if (n > ft_strlen(src))
		n = ft_strlen(src);
	if (dest < src)
	{
		ft_memcpy(dest, src, n);
	}
	else
	{
		while (n-- > 0)
		{
			((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
		}
	}
	return (dest);
}
int	main(void)
{
	char	src[] = "GeeksForGeeks";
	char	dest[100];

	ft_memmove(dest, src, -11);
	printf("Copied string is %s", dest);
	return (0);
}