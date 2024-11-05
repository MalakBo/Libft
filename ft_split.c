/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyi <mbouyi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:14:48 by mbouyi            #+#    #+#             */
/*   Updated: 2024/11/05 14:23:46 by mbouyi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char *str, char c)
{
	int	i;
	int	k;
	int	count;

	i = 0;
	k = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			k = 0;
		}
		else
		{
			if (k == 0)
				count++;
			k = 1;
		}
		i++;
	}
	return (count);
}

char	**ft_split(char *s, char c)
{
	char	**str;

	int (i), (k), (start);
	i = 0;
	k = 0;
	if (!s)
		return (NULL);
	str = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!str)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			str[k] = ft_substr(s, start, i - start);
			k++;
		}
	}
	str[k] = NULL;
	return (str);
}

/*int	main(void)
{
	char *str = "malak 8malak malak hh hh hh hh hh";
	char **result = ft_split(str, '8');

	for (int i = 0; result && result[i]; i++)
	{
		printf("%s\n", result[i]);
	}

	free_split(result);
	return (0);
}*/
