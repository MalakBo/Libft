/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyi <mbouyi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 23:12:03 by mbouyi            #+#    #+#             */
/*   Updated: 2024/10/28 17:14:26 by mbouyi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	if (!f || !s)
		return ;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
/*void uppercase(unsigned int i, char *c) {
	if (*c >= 'a' && *c <= 'z') {
		printf("str[%d] = %c\n", i, *c);
		*c -= 32;
	}
}

int	main(void) {
	char str[] = "MaLaK";

	ft_striteri(str, uppercase);
	printf("%s\n", str);
	return (0);
}*/
