#include "libft.h"
#include<stdio.h>
char *ft_strrchr(char *s,int c){
    int i;
    i = ft_strlen(s) - 1;
    while(i >= 0){
        if(s[i] == c){
            return (char *)(s + i);
        }
        i--;
    }
    if (c == '\0')
        return (char *)(s + i);
    return(NULL);
}
int main(){
    char *s;
    s = (ft_strrchr("Hello, World!",'l'));
    printf("%s",s);
    
}
