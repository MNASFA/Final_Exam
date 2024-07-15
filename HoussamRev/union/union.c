#include <unistd.h>
#include <stdio.h>
char *ft_strcat(char *s1 , char *s2)
{
    int i;
    int j;
    i = 0;

    while (s1[i] != '\0')
        i++;
    j = 0;
    while (s2[i] != '\0')
    {
        s1[i] = s2[j];
        i++;
        j++;
    }
    return s1;
}

int main(int ac , char **av)
{
    int i;
    char ascii[255] = {0};
    i = 0;
    if (ac == 3){
        char *str = ft_strcat(av[1] , av[2]);
        while (str[i] != '\0')
        {
            if (ascii[str[i] + 48] == 0){
                write(1, &str[i], 1);
                ascii[str[i] + 48] = 1;
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}