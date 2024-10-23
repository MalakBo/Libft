#include<stdio.h>
int ft_atoi(char *str){
    int i;
    int sign;
    int result;
    sign = 1;
    i = 0;
    result = 0;
    if (str == NULL)
        return 0;
    while(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
        i++;
    if(str[i] == '-'){
        sign = -1;
        i++;
    }
    else if(str[i] == '+'){
        i++;
    }
    while(str[i] != '\0' && str[i] >= '0' && str[i] <= '9'){
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return (int)(result * sign);
}
int main(int argc, char *argv[]){
    printf("%d\n", ft_atoi(argv[1]));
    return (0);

}