/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 21:31:09 by mbouyi            #+#    #+#             */
/*   Updated: 2024/10/25 21:31:11 by mbouyi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include<stdio.h>
#include<string.h>
char *ft_strdup(char *s){
    int i;
    char *dest;
    i = 0;
    dest = malloc(sizeof(char) * (ft_strlen(s) + 1));
    if(!dest || !s)
        return 0;
    while(s[i]){
        dest[i] = s[i];
        i++;
    }
    dest[i] = '\0';
    return(dest);
}
int main(void) {
    //char src[] = "GeeksForGeeks";
    char *dest;

    dest = ft_strdup(NULL);
    printf("Copied string is: %s\n", dest);

    // Free the allocated memory after use
    free(dest);
    return 0;
}
