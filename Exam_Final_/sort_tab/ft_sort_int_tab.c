#include <unistd.h>
#include <stdio.h>
void ft_sort_int_tab(int *tab, int size)
{
    int i = 0;
    int tmp;

    while (i < size - 1)
    {
        if(tab[i] > tab[i + 1])
        {
            tmp = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = tmp;
            i = 0;
        }
        else 
            i++;
    }
}

int main(void)
{
    int i = 0;
    int tab[] = {1,6,0,6,-5,7,2,3};
    int size = 7;
    ft_sort_int_tab(tab, size);
    while (i < size){
        printf("%d " , tab[i]);
        i++;
    }
        
    return 0;
}