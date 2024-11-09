/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyi <mbouyi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 21:40:47 by mbouyi            #+#    #+#             */
/*   Updated: 2024/11/09 16:10:41 by mbouyi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *big, char *little, size_t len)
{
	size_t	i;
	int		j;

	i = 0;
	if (!big || !little)
		return (0);
	if (little[i] == '\0')
		return ((char *)big);
	while (i < len && big[i] != '\0')
	{
		j = 0;
		while (big[i + j] == little[j] && i + j < len && little[j] != '\0')
			j++;
		if (little[j] == '\0')
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}

/*int main() {
	char *result;

	// Test case 1: Searching for "ipsum" in a longer string
	result = ft_strnstr("lorem ipsum dolor sit amet", "ipsum", 30);
	printf("Test 1: %s\n", result ? result : "NULL"); // Expected: "ipsum"

	// Test case 2: Searching for "ipsumm" which is not present
	result = ft_strnstr("lorem ipsum dolor sit amet", "ipsumm", 30);
	printf("Test 2: %s\n", result ? result : "NULL"); // Expected: "NULL"

	// Test case 3: Searching for "dolor" within a limited length
	result = ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15);
	printf("Test 3: %s\n", result ? result : "NULL"); // Expected: "NULL"

	// Test case 4: Searching for "lorem" which is present
	result = ft_strnstr("lorem ipsum dolor sit amet", "lorem", 30);
	printf("Test 4: %s\n", result ? result : "NULL");
		// Expected: "lorem ipsum dolor sit amet"

	// Test case 5: Searching for "a" in "abc"
	result = ft_strnstr("abc", "a", 3);
	printf("Test 5: %s\n", result ? result : "NULL"); // Expected: "abc"

	// Test case 6: Searching for an empty string in "abc"
	result = ft_strnstr("abc", "", 3);
	printf("Test 6: %s\n", result ? result : "NULL"); // Expected: "abc"

	// Test case 7: Searching for "c" in "abc"
	result = ft_strnstr("abc", "c", 3);
	printf("Test 7: %s\n", result ? result : "NULL"); // Expected: "c"

	// Test case 8: Searching with length less than the search string
	result = ft_strnstr("abcdef", "def", 3);
	printf("Test 8: %s\n", result ? result : "NULL"); // Expected: "NULL"

	return (0);
}*/
