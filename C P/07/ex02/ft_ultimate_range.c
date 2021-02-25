#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int size;
	int *ret;
	int i;

	i = 0;
	size = max - min;
	if (size <= 0)
	{
		ret = NULL;
		return (0);
	}
	if (!(ret = malloc(sizeof(int) * size)))
		return (-1);
	while (i < size)
	{
		ret[i] = min + i;
		i++;
	}
	*range = ret;
	return (size);
}

int main()
{
 int *tab;
 int x;
 int y;

 x = 2;
 y = 4;

 printf("%d:", ft_ultimate_range(&tab, x, y));
 int ret = ft_ultimate_range(&tab, x, y);

 for (int i = 0; i < (y - x); i++)
  printf(" %d", tab[i]);
}