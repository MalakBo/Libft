#include<stdio.h>
int ft_toupper(int c){
    if(c >= 'a' && c <= 'z')
        return c - 32;
    else
        return c;
} 
/*int main(){
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    printf("Uppercase: %c\n", ft_toupper(c));

}*/