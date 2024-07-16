#include <stdio.h>

 int	ft_atoi(const char *str)
 {
    int i = 0;
    int sign = 1;
    int res = 0;
    // Handle whitespaces 
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
        i++;

    if(str[i] == '-'){
        sign = -1;
        i++;
    }
    else 
        i++;

    while (str[i] >= 48 && str[i] <= 57)
    {
        res = res * 10 + (str[i] - 48);
        i++;
    }
    return (res * sign);
 }

 int main(int ac ,char **av)
 {
    (void) ac;
    printf("%d" , ft_atoi(av[1]));
    return 0;
 }