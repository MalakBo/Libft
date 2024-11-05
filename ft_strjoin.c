/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyi <mbouyi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 20:37:09 by mbouyi            #+#    #+#             */
/*   Updated: 2024/11/05 14:24:12 by mbouyi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	i;
	size_t	j;
	char	*s3;

	i = 0;
	j = 0;
	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (s2);
	if (!s2)
		return (s1);
	s3 = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!s3)
		return (NULL);
	while (s1[i] != '\0')
	{
		s3[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
		s3[i++] = s2[j++];
	s3[i] = '\0';
	return (s3);
}
/*int main() {
	char *result;

	result = ft_strjoin("Hello, ", "world!");
	printf("Result 1: %s\n", result);

	result = ft_strjoin(NULL, "world!");
	printf("Result 2: %s\n", result);

	result = ft_strjoin(NULL, NULL);
	printf("Result 3: %s\n", result);

	result = ft_strjoin("", "");
	printf("Result 4: '%s'\n", result);

	return (0);
}*/
