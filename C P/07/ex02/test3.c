#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int *arri;
	int size;
	int i;

	size = max - min;
	if (min > max)
	{
		*range = 0;
		return (0);
	}
    arri = malloc(sizeof(int) * size);
	if (arri == NULL)
	{
		*range = 0;
		return (-1);
	}
	*range = arri;
	i = 0;
	while (i < size)
	{
		*arri = min + i;
		arri++;
		i++;
	}
	return (size);
}

int     main(int argc, char **argv)
{

    int *tab;
    int x;
    int y;



    x = 5;
    y = 10;

    tab = NULL;

    printf("%d: ",ft_ultimate_range(&tab,x,y));
    int ret = ft_ultimate_range(&tab, x, y);

    for (int i = 0; i < (y - x); i++)
        printf("%d ", tab[i]);
    
}