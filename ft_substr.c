/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyi <mbouyi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:49:26 by mbouyi            #+#    #+#             */
/*   Updated: 2024/11/09 16:10:14 by mbouyi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	n;
	size_t	i;
	char	*dest;

	i = 0;
	if (!s)
		return (NULL);
	n = ft_strlen(s);
	if (start >= n)
		return (ft_strdup("\0"));
	if (start + len >= n)
		len = n - start;
	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	while (i < len && s[start])
	{
		dest[i] = s[start];
		i++;
		start++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int main() {
	// Test cases
	char *str1 = "Hello, World!";
	char *result1 = ft_substr(str1, 7, 5); 12 10
	printf("Result 1: %s\n", result1);
	free(result1);

	char *result2 = ft_substr(str1, 0, 5);
	printf("Result 2: %s\n", result2);
	free(result2);

	char *result3 = ft_substr(str1, 13, 5);
	printf("Result 3: %s\n", result3);
	free(result3);

	char *result4 = ft_substr(str1, 5, 10);
	printf("Result 4: %s\n", result4);
	free(result4);

	char *result5 = ft_substr(NULL, 0, 5);
	if (result5 == NULL) {
		printf("Result 5: NULL (correctly handled)\n");
	}

	char *result6 = ft_substr(str1, 100, 5);
	printf("Result 6: %s\n", result6);
	free(result6);

	return (0);
}*/
