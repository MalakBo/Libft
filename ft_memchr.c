#include "libft.h"
#include<stdio.h>
#include<string.h>
void *ft_memchr(void *s, int c, size_t n){
    size_t i;
    i = 0;
    if(!s || !c)
        return 0;
    while(((unsigned char *)s)[i] && i < n){
        if(((unsigned char *)s)[i] == c)
            return (void *)(s + i);
        i++;
    }
    if(c == '\0')
        return (void *)(s + i);
    return(NULL);
}
int main() {
    const char *str = "Hello, World!";
    char *s;

    s = (char *)ft_memchr(str, 'o', 2);
    
    if (s) {
        printf("%s\n", s);
    } else {
        printf("Character not found.\n");
    }

    return 0;
}