/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyi <mbouyi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 21:36:59 by mbouyi            #+#    #+#             */
/*   Updated: 2024/11/02 22:26:49 by mbouyi           ###   ########.fr       */
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

char	*trim_start(char *s1, char *set)
{
	while (*s1 && check(*s1, set))
		s1++;
	return (s1);
}

char	*ft_strtrim(char *s1, char *set)
{
	size_t	size;
	size_t	i;
	char	*r;

	s1 = trim_start(s1, set);
	size = strlen(s1);
	while (size && check(s1[size - 1], set))
		size--;
	r = malloc(sizeof(char) * (size + 1));
	if (!r)
		return (NULL);
	i = 0;
	while (i < size)
	{
		r[i] = s1[i];
		i++;
	}
	r[size] = '\0';
	return (r);
}

/*int	main(void)
{
	printf("%s\n", ft_strtrim("OKIMM", "OM"));
}*/
