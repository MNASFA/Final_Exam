#include <unistd.h>

int ft_strlen(char *str)
{
    int len;
    len = 0;
    while(str[len] != '\0')
    {
        len++;
    }
    return len;
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        int len = ft_strlen(av[1]) - 1;
        while(av[1][len] == ' ' || av[1][len] == '\t')
            len--;

        while(len > 0){
            if(av[1][len - 1] == ' ' || av[1][len - 1] == '\t')
                break ;
            len--;
        }

        while(av[1][len] != '\0')
        {
            write(1, &av[1][len], 1);
            if(av[1][len + 1] == ' ' || av[1][len + 1] == '\t')
                break;
            len++;
        }
    }
    write(1, "\n", 1);
    return 0;
}