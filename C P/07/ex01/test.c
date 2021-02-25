#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int        *ft_range(int min, int max)
{
    int    range;
    int    index;
    int    *buffer;

    if (min >= max)
        return (0);
    range = max - min - 1;
    if ((buffer = malloc(range * sizeof(int))) == NULL)
        return (0);
    index = 0;
    while (index <= range)
    {
        buffer[index] = min + index;
        index++;
    }
    return (buffer);
}

int     main(int argc, char **argv)
{
    (void)argc;
    (void)argc;
    int x, y;

    x = 5;
    y = 10;
    int *ret = ft_range(x, y);
    for (int i = 0; i < (y - x); i++)
        printf(" %d ", ret[i]);
}