/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyi <mbouyi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 21:24:53 by mbouyi            #+#    #+#             */
/*   Updated: 2024/11/05 14:20:59 by mbouyi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(void *s1, void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}

/*int main() {
    // Test case 1
    printf("Test 1: %d\n", ft_memcmp("t\200", "t\0", 2)); 

    // Test case 2
    printf("Test 2: %d\n", ft_memcmp("testss", "test", 5)); 

    // Test case 3
    printf("Test 3: %d\n", ft_memcmp("", "test", 4)); 

    // Test case 4
    printf("Test 4: %d\n", ft_memcmp("test", "", 4)); 

    // Test case 5
    printf("Test 5: %d\n", ft_memcmp("abc", "abc", 3)); 

    // Test case 6
    printf("Test 6: %d\n", ft_memcmp("abc", "abd", 3));

    return 0;
}*/