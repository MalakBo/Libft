/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 21:36:59 by mbouyi            #+#    #+#             */
/*   Updated: 2024/11/05 22:50:04 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int    check(char c, char const *set)
{
    int    i;

    i = 0;
    while (set[i])
    {
        if (c == set[i])
            return (1);
        i++;
    }
    return (0);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    size_t    (i), (size);
    char    *r;

    i = 0;
    if (!s1)
        return (NULL);
    while (s1[i])
    {
        if (check(*s1, set))
            s1++;
        i++;
    }
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
    ft_memcpy(r,s1,size);
    r[size] = '\0';
    return (r);
}

/*int	main(void)
{
	printf("%s\n", ft_strtrim("OKIMM", "OM"));
}*/
