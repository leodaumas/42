#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int		*ft_range(int min, int max)
{
	int *arri;
	int size;
	int i;

	i = 0;
	size = max - min;
	if (size <= 0)
		return (NULL);
	if (!(arri = (int *)malloc(sizeof(int) * size)))
		return (NULL);
	while (min + i < max)
	{
		arri[i] = min + i;
		i++;
	}
	return (arri);
}

int main()
{	
	int x, y;

 	x = 10;
	y = 15;
	int *ret = ft_range(x, y);
	for (int i = 0; i < (y - x); i++)
		printf(" %d ", ret[i]);
}