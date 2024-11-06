/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyi <mbouyi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 20:59:53 by mbouyi            #+#    #+#             */
/*   Updated: 2024/10/28 16:13:04 by mbouyi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (i < n)
	{
		((unsigned char *)s)[i] = c;
		i++;
	}
	return (s);
}

/*    int main() {
	char buffer1[50] = "OKII";
	printf("Before ft_memset: %s\n", buffer1);
	ft_memset(NULL,'H', 5);
	//memset(buffer2, NULL, 1);
	printf("After ft_memset: %s\n", buffer1);
	return (0);
}*/
