#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *str)
{
    int i;
    int sign;
    int res;
    i = 0;
    sign = 1;
    res = 0;

    while(str[i] >= 9 && str[i] <= 13 && str[i] == 32)
        i++;

    if (str[i] == '-'){
        sign = sign * (-1);
        i++;
    }
    else if (str[i] == '+')
    {
        i++;
    }
        
    
    while (str[i] >= 48 && str[i] <= 57)
    {
        res = res * 10 + (str[i] - 48);
        i++;
    }

    return (res * sign);
}

void ft_swap(int ints[], int len)
{
    int i;
    i = 0;
    while (i < len - 1)
    {
        if (ints[i] > ints[i + 1])
        {
            int tmp;
            tmp = ints[i];
            ints[i] = ints[i + 1];
            ints[i + 1] = tmp;
            i = 0;
        }
        else
            i++;
    }
}


int main(int ac, char **av)
{
    int i;
    int j; 
    int ints[ac - 1];
    
    i = 1;
    while(i < ac)
    {
        ints[i] = ft_atoi(av[i]);
        i++;
    }
    ft_swap(ints, i);
    j = 0;
    while(j < ac)
    {
        printf("%d , " ,ints[j]);
        j++;
    }

    return 0;
}