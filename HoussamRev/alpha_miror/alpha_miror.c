#include <unistd.h>

void alpha(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if (str[i] >= 97 && str[i] <= 122)
            str[i] = 97 + 122 - str[i];
        else if (str[i] >= 65 && str[i] <= 90)
            str[i] = 65 + 90 - str[i];
        i++;
    }
}

int main(int ac , char **av){
    int i;
    i = 0;
    alpha(av[1]);
    if (ac == 2)
    {
        while(av[1][i] != '\0')
        {
            write(1 , &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n" , 1);
    return 0;
}