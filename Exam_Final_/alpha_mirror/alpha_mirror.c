#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    i = 0;

    if (ac == 2)
    {
        while(av[1][i] != '\0')
        {
            if(av[1][i] >= 65 && av[1][i] <= 90)
                av[1][i] = 65 + 90 - av[1][i];
            else if (av[1][i] >= 97 && av[1][i] <= 122)
                av[1][i] = 97 + 122 - av[1][i];
            i++;
        }
        i = 0;
        while(av[1][i] != '\0')
        {
            write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}