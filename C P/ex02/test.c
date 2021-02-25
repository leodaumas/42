#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int     *ft_ultimate_range(int **range, int min, int max)
{
    int *arri;
    int *ptr_saved;
    int *size;
    int i;

    i = 0;
    size = *range;
    if (*size > (max - min))
        return((int *)NULL);    
    if (size <= 0)
        return((int *)NULL);
            
    arri = (int *)malloc(sizeof(int) * **range);
    if (arri == NULL)
        return((int *)-1);
    ptr_saved = arri;
    while(i < *size)
    {
        *arri = min;
    printf(" %d %d %d %d %d %d\n",min, max, *arri, **range, *size, i);
        min++;
        arri++;
        i++;
    }
    return (ptr_saved);
}

int     main(int argc, char **argv)
{
    (void)argc;
    (void)argc;
    int x, y, *z, size;


    x = -5;
    y = -1;
    size = y - x - 1;
    z = &size;
    int *ret = ft_ultimate_range(&z, x, y);
    for (int i = 0; i < size; i++)
        printf(" %d ", ret[i]);
}