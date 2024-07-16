#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> 

int count_digits(int nbr){
    int len;
    len = 0;
    if(nbr == 0)
        return (0);
    if (nbr < 0)
        nbr *= -1;
    while (nbr != 0)
    {
        nbr = nbr / 10;
        len++;
    }
    return len;
}

char	*ft_itoa(int nb)
{
    char *result = NULL;
    int len = count_digits(nb);

	if (nb == -2147483648)
	{
        result = (char *) malloc(11 * sizeof(char));
        if (!result)
            return NULL;
        result = "-2147483648";
	}
    else if (nb == 0)
    {
        return ("0");
    }
	else if (nb < 0)
	{
        result = (char *) malloc(len * sizeof(char));
        if (!result)
            return NULL;
        result[0] = '-';
		nb *= -1;;
        while (len > 0)
        {
            result[len] = nb % 10 + 48;
            nb = nb / 10;
            len--;
        }
	}
    else if (nb > 0)
    {
        result = (char *) malloc(len * sizeof(char));
        if (!result)
            return NULL;
        while (len >= 0)
        {
            result[len - 1] = nb % 10 + 48;
            nb = nb / 10;
            len--;
        }
    }
    return result;
}

int main()
{
    int nbr = 1;
    printf("%s", ft_itoa(nbr));
}


/*
char	*ft_itoa(int nbr)
{
    char *nbrs;
    int len;
    long nb;
    nb = nbr;
    len = count_digits(nb);
    int i = len;
    nbrs = (char *)malloc(sizeof(char) * (len + 1));
    if(!nbrs)
        return NULL;
    if (nb == 0)
        nbrs[0] = '0';
    if (nb < 0)
    {
        nbrs[0] = '-';
        nb = nb * (-1);
        i++;
    }
    while (nb > 0)
    {
        nbrs[i] = nb % 10 + 48;
        nb = nb / 10;
        i--;
    }
    //rev_tab(nbrs , len);
    return (nbrs);
}*/