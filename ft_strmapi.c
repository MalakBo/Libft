/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyi <mbouyi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:00:03 by mbouyi            #+#    #+#             */
/*   Updated: 2024/11/09 16:11:02 by mbouyi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*str;

	if (!s || !f)
		return (NULL);
	i = 0;
	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*static char uppercase(unsigned int i,char c)
{
	if( c >= 'a' && c <= 'z')
	{
		printf("str[%d] =  %c \n",i,c);
		c -= 32;
	}
	return (c);
}
int	main(void)
{
	char str[] = "MaLaK";
	char *r;
	r = ft_strmapi(str, uppercase);
	if(r)
	{
		printf("org: %s \n", str);
		printf("upp: %s \n", r);
	}
	else
		printf("err");
	return (0);
}*/