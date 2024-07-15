#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
	int i;
	int tmp;

	i = 0;
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
	int tab[7] = {7,5,6,3,8,1,2};
	ft_sort_int_tab(tab , 7);
	while (tab[i] !=  '\0')
	{
		printf("%d" , tab[i]);
		i++;
	}
}
