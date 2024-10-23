#include "libft.h"
#include<stdio.h>
#include<string.h>
size_t ft_strlcat(char *dst,  char *src, size_t dstsize){
    size_t i;
    size_t dlen;
    size_t slen;
    i = 0;
    dlen = ft_strlen(dst);
    slen = ft_strlen(src);
    if(!dst || !src)
        return 0;
    if(dstsize == 0){
        return slen;
    }
    if(dlen >= dstsize){
        return (dstsize + slen);
    }
    while(dst[i] != '\0' && src[i] && dlen + i < dstsize - 1){
        dst[dlen + i] = src[i];
        i++;
    }
    dst[dlen + i] = '\0';
    return (dlen + slen);
}
int main() 
{
    printf("%zu\n", ft_strlcat( "world","helloooooooooooo",-1));
    printf("%zu\n", strlcat( "world","helloooooooooooo",-1));
    return 0;
}

