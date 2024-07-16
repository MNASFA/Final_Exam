#include <unistd.h>
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

char *ft_rev_print (char *str)
{
    int len = ft_strlen(str) - 1;

    while (len >= 0){
        write(1, &str[len], 1);
        len--;
    }
    return str;
}

int main(void)
{
    char str[] = "Test";
    ft_rev_print(str);
}