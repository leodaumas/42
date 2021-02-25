#include <stdio.h>
#include "ft_abs.h"

int main()
{
    int i;

    i = -5;
    while( i < 5)
    {
        printf("%d %d\n", i, ABS(i));
        i++;
    }
}