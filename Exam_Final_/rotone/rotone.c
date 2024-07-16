#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    i = 0;
    if(ac == 2)
    {
        while(av[1][i] != '\0')
        {
            if ((av[1][i] >= 65 && av[1][i] <= 89 ) || ((av[1][i] >= 97 && av[1][i] <= 121)))
                av[1][i] += 1;
            else if (av[1][i] == 'z')
                av[1][i] = 'a';
            else if (av[1][i] == 'Z')
                av[1][i] = 'A';
            i++;
        }
        i = 0;
        while(av[1][i] != '\0')
        {
            write(1 , &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}