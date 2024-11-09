/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyi <mbouyi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:21:26 by mbouyi            #+#    #+#             */
/*   Updated: 2024/11/09 16:13:14 by mbouyi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*str;

	if (nmemb && SIZE_MAX / nmemb < size)
		return (NULL);
	str = malloc(nmemb * size);
	if (!str)
		return (NULL);
	ft_bzero(str, nmemb * size);
	return (str);
}
/*int main() {
	size_t nmemb = SIZE_MAX;
	size_t size = sizeof(int);

	int *array = (int *)calloc(nmemb, size);

	// Check if ft_calloc handled the allocation properly
	if (!array) {
		printf("Memory allocation failed as expected (no segmentation fault)\n");
	} else {
		printf("Memory allocation succeeded unexpectedly!\n");
		free(array);  // Free if allocation succeeded
	}

	return (0);
}*/
