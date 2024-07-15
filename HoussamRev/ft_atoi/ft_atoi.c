
#include <stdio.h>

int	ft_atoi(const char *str)
{
    int i;
    i = 0;
    int sign = 1;
    int res;
    res = 0;
    
    while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
        i++;

    // while (str[i] != '\0' && (str[i] == '-' || str[i] == '+'))
    // {
    //     if (str[i] == '-')
    //         sign = sign * (-1);
    //     i++;
    // }

    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if (str[i] == '+')
        i++;
    
    while (str[i] >= 48 && str[i] <= 57){
        res = res * 10 + (str[i] - 48);
        i++;
    }
    return (res * sign);
}

int main (int ac, char **av)
{
    (void)ac;
    printf("%d" , ft_atoi(av[1]));
}