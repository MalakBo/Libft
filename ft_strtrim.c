/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyi <mbouyi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 21:36:59 by mbouyi            #+#    #+#             */
/*   Updated: 2024/11/09 20:47:59 by mbouyi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(char c, char const *set)
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

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*r;
	size_t	i;
	size_t	size;

	i = 0;
	if (!s1)
		return (NULL);
	while (s1[i++])
		if (check(*s1, set))
			s1++;
	size = ft_strlen(s1);
	while (size)
	{
		if (check(s1[size - 1], set))
			size--;
		else
			break ;
	}
	r = (char *)malloc((size + 1) * sizeof(char));
	if (!r)
		return (NULL);
	ft_memcpy(r, s1, size);
	r[size] = '\0';
	return (r);
}

/*int	main(void)
{
	printf("%s\n", ft_strtrim("OKIMM", "OM"));
}*/
