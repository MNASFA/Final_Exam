#include <stdio.h>

int ft_strlen(char *str)
{
    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    return len;
}

char    *ft_strrev(char *str)
{
    int i = 0;
    int len = ft_strlen(str);
    int middle = ft_strlen(str) / 2;

    while(i < middle)
    {
        int tmp;
        tmp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = tmp;
        i++;
    }
    return str;
}

int main(void)
{
    char str[] = "abcdsedfgfjz";
    printf("%s" , ft_strrev(str));
}