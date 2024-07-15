#include <unistd.h>

int ft_strcmp(char *s1 , char *s2)
{
    int i = 0;

    while(s1[i] != '\0' && s1[i] == s2[i])
        i++;
    return (s1[i] - s2[i]);
}

void ft_swap(char **s1 , char **s2)
{
    char    *tmp;

    tmp = *s1;
    *s1 = *s2;
    *s2 = tmp;
}

void ft_putstr(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
}

int main(int ac,char **av)
{
    int i = 1;
    int j;

    while(i < ac)
    {
        j = i + 1;
        while (j < ac)
        {
            int temp;
            temp = ft_strcmp(av[i] , av[j]);
            if (temp > 0)
            {
                ft_swap(&av[i] , &av[j]);  
            }
            j++;
        }
        i++;
    }
    i = 1;
    while (i < ac)
    {
        ft_putstr(av[i]);
        ft_putstr("\n");
        i++;
    }
}