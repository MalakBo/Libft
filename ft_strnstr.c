#include "libft.h"
#include<stdio.h>
#include <stdlib.h>
#include<string.h>
char *ft_strnstr(char *haystack,char *needle, size_t len){
    size_t i;
    int j;
    i = 0;
    j = 0;
    if(!haystack || !needle || !len)
        return 0;
    if(needle[j] == '\0')
        return (haystack);
    while(haystack[i]){
        while(haystack[i + j] == needle[j] && i < len){
            if(needle[j + 1] == '\0')
                return (haystack + i);
            else
                j++;
        }
        i++;
    }
    return (NULL);
}
int main(int argc, char const *argv[])
{
    printf("%s\n",ft_strnstr("souita sabo3 is the best", "sabo3 ", 12));
    printf("%s\n",strnstr("souita sabo3 is the best", "sabo3 ", 12));
    return 0;
}
