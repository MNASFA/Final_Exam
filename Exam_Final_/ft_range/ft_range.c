#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
int     *ft_range(int start, int end)
{
    int i;
    int len = 0;
    int *ints;
    i = 0;

    if (start > end)
        len = start - end;
    else if(end >= start)
        len = end - start;

    ints = (int *)malloc(sizeof(int) * len);
    if (!ints)
        return NULL;

    while (i <= len)
    {
        ints[i] = start;
        if (end >= start)
            start++;
        else if (start > end)
            start--;
        i++;
    }
    return (ints);
}

int main()
{
    int start = 0;
    int end = -3;
    int *ints = ft_range(start , end);
    int i = 0;
    while(i <= start - end)
    {
        printf("%d " , ints[i]);
        i++;
    }
}