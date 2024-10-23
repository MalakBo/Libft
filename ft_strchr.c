#include<stdio.h>
char *ft_strchr(char *s, int c){
    int i;
    i = 0;
    while(s[i]){
        if(s[i] == c)
        {
            return (char *)(s + i);
        }
    i++;
    }
    if(c == '\0')
        return (char *)(s + i);
    return(NULL);
}

int main(){
    char *s;
    s = (ft_strchr("Hello, World!",'o'));
    printf("%s",s);
    
}