#include "libft.h"
#include <stdio.h>
#include <string.h>
void *ft_memmove(void *dst,void *src, size_t len){
    if(!dst || !src)
        return 0;
    if(dst < src)
        ft_memcpy(dst,src,len);
    else
    {
        while(len-- > 0){
            *(unsigned char*)dst = *(unsigned char*)src;
        }
    } 
}
int main() {
    char src[] = "Hello, World!";
    char dst[20];

    // Case 1: Non-overlapping memory regions
    ft_memmove(dst, src, strlen(src) + 1);
    printf("Case 1 - Non-overlapping: %s\n", dst);

    // Case 2: Overlapping memory regions (forward copy)
    char overlap[] = "OverlappingExample";
    ft_memmove(overlap + 5, overlap, 10); // src and dst overlap
    printf("Case 2 - Overlapping (forward): %s\n", overlap);

    // Case 3: Segmentation fault check (NULL pointers)
    ft_memmove(NULL, src, strlen(src) + 1); // Should not segfault, just return 0
    printf("Case 3 - Null dst: No segfault expected.\n");

    ft_memmove(dst, NULL, strlen(src) + 1); // Should not segfault, just return 0
    printf("Case 4 - Null src: No segfault expected.\n");

    return 0;
}