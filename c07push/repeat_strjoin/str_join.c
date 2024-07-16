#include <unistd.h>
#include <stdlib.h>
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

int total_len(int size, char **strs, char *sep)
{
    int i = 0;
    int total = 0;

    while (i < size)
    {
        total += ft_strlen(strs[i]);
        i++;
    }
    total += ft_strlen(sep) * (size - 1);
    return (total);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	j = 0;
	while (dest[j] != '\0')
		j++;
	i = 0;
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
    int i = 0;
    int totallen = total_len(size, strs, sep);
    char *ptr;

    ptr = (char *)malloc(sizeof(char) * (totallen + 1));
    if (!ptr)
        return NULL;
    ptr[0] = '\0';
    if (size == 0)
        return ptr;

    while(i < size)
    {
        ft_strcat(ptr , strs[i]);
        if(i < size - 1)
            ft_strcat(ptr , sep);
        i++;
    }
    return (ptr);
}

int main(void)
{
    char *strs[] = {"Hello" , "World" , "yeep"};
    char sep[] = " ,";
    int size = 3;

    printf("%s" , ft_strjoin(size,strs,sep));
}