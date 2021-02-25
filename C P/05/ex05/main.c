#include <stdio.h>
#include "ft_sqrt.c"

int main()
{
    int x, y;

    x = -1;
    y =  9;
    while(x++ < y)
    {
        if(ft_sqrt(x) != 0)
            printf(" %dSqrt%d ",x, ft_sqrt(x));
    }
 //               printf(" %d ",ft_sqrt(46340));
}