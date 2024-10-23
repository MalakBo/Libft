#include "libft.h"
#include <stdio.h>
void ft_bzero(void *s, size_t n){
    size_t i;
    i = 0;
    while ( i < n){
        ((unsigned char*)s)[i] = 0;
        i++;
    }
}
int main() {
    // Test case 1: Zero out a small character array
    char buffer[10] = "Hello";
    printf("Before ft_bzero: %s\n", buffer);
    
    ft_bzero(buffer, 5);  // Set the first 5 characters to zero (null terminators)
    printf("After ft_bzero: ");
    
    for (int i = 0; i < 10; i++) {
        if (buffer[i] == 0)
            printf("\\0");  // Print null terminator explicitly
        else
            printf("%c", buffer[i]);
    }
    printf("\n");

    // Test case 2: Zero out a buffer of integers
    int int_buffer[5] = {1, 2, 3, 4, 5};
    printf("Before ft_bzero (int array): ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", int_buffer[i]);
    }
    printf("\n");

    ft_bzero(int_buffer, 5 * sizeof(int));  // Set all integers to zero
    printf("After ft_bzero (int array): ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", int_buffer[i]);
    }
    printf("\n");

    return 0;
}