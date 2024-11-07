/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyi <mbouyi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:14:48 by mbouyi            #+#    #+#             */
/*   Updated: 2024/11/07 00:49:42 by mbouyi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int count_words(const char *str, char c)
{
    int i;
    int k;
    int count;

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

void free_split(char **array, int count)
{
    int i;

    i = 0;
    while (i < count)
    {
        free(array[i]);
        i++;
    }
    free(array);
}

char **init_split(char *s, char c)
{
    char **str;

    if (!s)
        return (NULL);
    str = malloc(sizeof(char *) * (count_words(s, c) + 1));
    if (!str)
        return (NULL);
    return (str);
}

int loop(const char *s, char c, int *i)
{
    int start;

    while (s[*i] == c)
        (*i)++;
    start = *i;
    while (s[*i] && s[*i] != c)
        (*i)++;
    return (start);
}

char **ft_split(char *s, char c)
{
    char **str;

    int (i), (k), (start); 
    i = 0;
    k = 0;
    str = init_split(s, c);
    if (!str)
        return (NULL);
    while (s[i])
    {
        if (s[i] != c)
        {
            start = loop(s, c, &i);
            str[k] = ft_substr(s, start, i - start);
            if (!str[k])
                return (free_split(str, k), NULL);
            k++;
        }
        else
            i++;
    }
    str[k] = NULL;
    return (str);
}

int main()
{
    char **str = ft_split("Hello World", ' ');
    int i = 0;
    while (str[i])
    {
        printf("%s\n", str[i]);
        i++;
    }
    free_split(str, i);
    return 0;
}
