/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyi <mbouyi@student.1337.ma>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 21:24:53 by mbouyi            #+#    #+#             */
/*   Updated: 2024/10/24 21:24:58 by mbouyi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(void *s1, void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!s1 || !s2 || !n)
		return (0);
	while (i < n && ((unsigned char *)s1)[i] && ((unsigned char *)s2)[i]
		&& ((unsigned char *)s1)[i] == ((unsigned char *)s2)[i])
	{
		i++;
	}
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}
