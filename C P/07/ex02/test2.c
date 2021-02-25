#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int        ft_ultimate_range(int **range, int min, int max)
{
    int    bound;
    int    index;
    int    *buffer;

    if (min >= max)
    {
        *range = 0;
        return (0);
    }
    bound = max - min - 1;
    if ((buffer = malloc(bound * sizeof(int))) == NULL)
    {
        *range = 0;
        return (-1);
    }
    *range = buffer;
    index = 0;
    while (index <= bound)
    {
        buffer[index] = min + index;
        index++;
    }
    return (bound + 1);
}

int     main(int argc, char **argv)
{

    int *tab;
    int x;
    int y;

    x = 0;
    y = 3;

    printf("%d",ft_ultimate_range(&tab,x,y));
    //printf("%d", *tab);
}