#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int len = 0;

    while(str[len] != '\0')
        len++;
    return len;
}

char *ft_strcpy(char *dest, char *src)
{
    int i = 0;

    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

char    *ft_strdup(char *src)
{
    int len = ft_strlen(src);
    char *dest;

    dest = (char *)malloc(sizeof(char) * (len + 1));
    if(!dest)
        return NULL;
    ft_strcpy(dest, src);
    return dest;
}

int main(void)
{
    char src[] = "test";
    printf("%s" , ft_strdup(src));
}