#include <unistd.h>
#include <stdio.h>

int max(int* tab, unsigned int len)
{
    int tmp;
    unsigned int i = 0;
    while (i < len - 1)
    {
        if (tab[i] > tab[i + 1])
        {
            tmp = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = tmp;
            i = 0;
        }
        else
            i++;
    }
    return (tab[len - 1]);
}

int main(void)
{
    int tab[] = {10 , 1 , 26 , 2, 15 ,504, 12 , 50025};
    unsigned int len = 8;
    printf("%d" , max(tab , len));
}
