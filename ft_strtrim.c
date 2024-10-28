/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyi <mbouyi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 21:36:59 by mbouyi            #+#    #+#             */
/*   Updated: 2024/10/28 22:40:58 by mbouyi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check(char c, char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char *s1, char *set)
{
	size_t	i;
	size_t	size;
	char	*r;

	i = 0;
	while (s1[i])
	{
		if (check(*s1, set))
			s1++;
		i++;
	}
	size = strlen(s1);
	while (size)
	{
		if (check(s1[size - 1], set))
			size--;
		else
			break ;
	}
	r = malloc(sizeof(char) * size + 1);
	if (!r)
		return (NULL);
	i = 0;
	while (i < size)
	{
		r[i] = s1[i];
		i++;
	}
	r[i] = '\0';
	return (r);
}
/*int main(){
	printf("%s\n",ft_strtrim("OKI","OI"));

}*/
