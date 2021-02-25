#include <stdio.h>
#include "ft_is_prime.c"

int main()
{
    int x, y;

    x = -1;
    y = 20;
    while(x++ < y)
    {
        if(ft_is_prime(x) == 1)
            printf(" %d ", x);
    }
 //  printf("%d", ft_is_prime(2147483647));
}