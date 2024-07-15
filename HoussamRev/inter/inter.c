#include <unistd.h>

int main(int ac, char **av)
{
	int i;
	int j;
	char ascii[255] = {0};

	if (ac == 3)
	{
		i = 0;
		while (av[1][i] != '\0')
		{
			j = 0;
			while (av[2][j] != '\0')
			{
				if(av[1][i] == av[2][j] && ascii[av[1][i] + 48] == 0)
				{
					write(1, &av[1][i], 1);
					ascii[av[1][i] + 48] = 1;
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}