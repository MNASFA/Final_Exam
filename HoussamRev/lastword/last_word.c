#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int len;
    len = 0;
    while (str[len] != '\0')
        len++;
    return (len);
}

int main(int ac, char **av)
{
    int i;
    int len;
    
    if (ac ==  2)
    {
        len = ft_strlen(av[1]);
        i = len - 1;
        while (av[1][i] == ' ' || av[1][i] == '\t')
            i--;

        while (i > 0)
        {
            if (av[1][i] == ' ' || av[1][i] == '\t')
                break;
            i--;
        }
        i++;
        while (av[1][i] != '\0')
        {
            write(1, &av[1][i], 1);
            if (av[1][i + 1] == ' ' || av[1][i + 1] == '\t')
                break ;
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}