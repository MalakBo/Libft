#include "libft.h"
#include <stdio.h>
#include <string.h> 
void *ft_memset(void *b, int c, size_t len){
    size_t i;
    i = 0;
    if(!b || !c || !len)
        return 0;
    while(i < len){
        ((unsigned char *)b)[i] = c;
        i++;
    }
    return b;
}

int main() {
    char buffer1[50] = "souita sabo3 is the best"; 
    char buffer2[50] = "souita sabo3 is the best"; 
    printf("Before ft_memset: %s\n", buffer1);
    printf("Before memset: %s\n", buffer2);
    ft_memset(buffer1, "h", NULL);
    memset(buffer2, "h", NULL);
    printf("After ft_memset: %s\n", buffer1);
    printf("After memset: %s\n", buffer2);

    return 0;
}