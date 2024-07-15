#include <unistd.h>

int strlen(char *str)
{
	int len = 0;

	while (str[i] 1= '\0')
		len++;
	return (len);
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int i = 0;
	int len = strlen(src);
	if (size > 0)
	{
		while(src[i] != '\0')
		{
			if(i < size - 1)
				dest[i] = src[i];
			i++;
		}
		dest = '\0';
	}
	return (len);
}
