#include <stdio.h>
#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int i = 0;
	int len = 0;
	int *ints;

	if (end >= start)
		len = end - start;
	else if (start > end)
		len = start - end;
	
	ints = (int *)malloc(sizeof(int) * len);
	while (i <= len)
	{
		ints[i] = start;
		if(end >= start)
			start++;
		else if (start > end)
			start--;
		i++;
	}
	return (ints);
}

int main(){
	int start = 0;
	int end = -5;
	int i = 0;
	int *ints = ft_range(start, end);
	while(i <= start - end)
	{
		printf("%d " , ints[i]);
		i++;
	}
	return 0;
}