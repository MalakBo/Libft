#include "libft.h"
#include <stdio.h>
#include<string.h>
int ft_memcmp(void *s1,void *s2, size_t n){
    size_t i;
    i = 0;
    if(!s1 || !s2 || !n)
        return 0;
    while(i < n && ((unsigned char *)s1)[i] && ((unsigned char *)s2)[i] && ((unsigned char *)s1)[i] == ((unsigned char *)s2)[i]){
        i++;
    }
    return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}
int main() {
    char buffer1[50] = "ma"; 
    char buffer2[50] = "mA"; // Initialize another buffer for comparison

    // Print the original buffers
    printf("Original buffer1: %s\n", buffer1);
    printf("Original buffer2: %s\n", buffer2);

    // Compare the buffers using ft_memcmp
    int result = ft_memcmp(buffer1, buffer2, 0); // Compare the buffers

    // Print the comparison result
    if (result == 0) {
        printf("The buffers are equal.\n");
    } else {
        printf("The buffers are not equal. Difference: %d\n", result);
    }

    return 0;
}