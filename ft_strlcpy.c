#include "libft.h"
#include<stdio.h>
size_t ft_strlcpy(char * dst,char * src, size_t dstsize){
    size_t i;
    size_t src_len;
    i = 0;
    if(!dst || !src)
        return 0;
    src_len = ft_strlen(src);
    if(dstsize == 0)
        return src_len;
    while(src[i] && i < dstsize - 1){
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return src_len;
}
int main(){
    char src[] = "Hello, World!";
    char dst[] = "Hello";
    printf("%zu\n", ft_strlcpy(dst, src, 10));
    printf("%s\n", dst);
    return 0;
}