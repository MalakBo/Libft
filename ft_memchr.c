/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 20:59:16 by mbouyi            #+#    #+#             */
/*   Updated: 2024/10/24 20:59:19 by mbouyi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (!s || !c)
		return (0);
	while (i < n && ((unsigned char *)s)[i])
	{
		if (((unsigned char *)s)[i] == c)
			return ((void *)(s + i));
		i++;
	}
	if (c == '\0')
		return ((void *)(s + i));
	return (NULL);
}
