/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 21:40:47 by mbouyi            #+#    #+#             */
/*   Updated: 2024/10/24 21:40:49 by mbouyi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(char *big, char *little, size_t len)
{
	size_t	i;
	int		j;

	i = 0;
	j = 0;
	if (!big || !little || !len)
		return (0);
	if (little[j] == '\0')
		return (big);
	while (big[i])
	{
		while (big[i + j] == little[j] && i < len)
		{
			if (little[j + 1] == '\0')
				return (big + i);
			else
				j++;
		}
		i++;
	}
	return (NULL);
}
