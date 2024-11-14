/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyi <mbouyi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:14:48 by mbouyi            #+#    #+#             */
/*   Updated: 2024/11/14 21:01:00 by mbouyi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c)
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
			k = 0;
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

static void	free_split(char **a)
{
	int	i;

	i = 0;
	if (!a)
		return ;
	while (a[i])
		free(a[i++]);
	free(a);
}

char	**ft_split(char const *s, char c)
{
	char	**a;

	int (i), (k), (start);
	if (!s)
		return (NULL);
	a = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!a)
		return (NULL);
	i = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
			a[k++] = ft_substr(s, start, i - start);
		if (!a)
			free_split(a);
	}
	a[k] = NULL;
	return (a);
}

/*int main()
{
	char **str = ft_split("Hello World", ' ');
	int i = 0;
	while (str[i])
	{
		printf("%s\n", str[i]);
		i++;
	}
	free_split(str, i);
	return (0);
}*/
