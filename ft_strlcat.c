/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyi <mbouyi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 22:39:11 by mbouyi            #+#    #+#             */
/*   Updated: 2024/11/09 16:11:30 by mbouyi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dlen;
	size_t	slen;

	i = 0;
	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	if (!dst || !src)
		return (0);
	if (size == 0)
		return (slen);
	if (dlen >= size)
		return (size + slen);
	while (src[i] != '\0' && dlen + i < size - 1)
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	return (dlen + slen);
}
/*int main()
{
char	*src = "world !";
char	dst[] = "hello ";
int		d = ft_strlcat(dst,src,4);
int		s = strlcat(dst,src,4);
printf("d1 = %d",d);
printf("d1 = %d",s);
}*/
