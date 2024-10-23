#include "libft.h"
#include<stdio.h>
#include<string.h>
void *ft_memcpy(void *dst,void *src, size_t n){
    size_t i;
    i = 0;
    if(!dst || !src || !n)
        return 0;
    while(i < n && ((unsigned char *)src)[i]){
        ((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
        i++;
    }
    return (dst);
}
int main() {
    char buffer1[50] = "malak"; 
    char buffer2[50]; // Initialize another buffer for memcpy

    // Print the original buffer
    printf("Original buffer1: %s\n", buffer1);

    // Use memcpy to copy the content of buffer1 to buffer2
    ft_memcpy(buffer2, buffer1, sizeof(buffer1)); // Copy the entire buffer1 to buffer2

    // Print both buffers after memcpy
    printf("After memcpy, buffer2: %s\n", buffer2);

    return 0;
}