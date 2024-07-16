void ft_putnbr(int nbr)
{
    int div;
    int calc;
    int i;

    i = 1;
    if (nbr == -2147483648)
    {
        write(1, "-", 1); 
        write(1, "2", 1); 
        nbr = 147483648; 
    }
    if (nbr < 0)
    {
        write(1, "-", 1);
        nbr *= -1;
    }
    div = 1;
    while ((nbr / div) >= 10)
    {
        div *= 10;
        i++;
    }

    printf("i=%d\n", i);
    while (div >= 1)
    {
        calc = ((nbr / div) % 10) + '0';
        write(1, &calc, 1);
        div /= 10;
    }
}