int        ft_sqrt(int nb)
{
    int        i;

    i = 1;
    if (nb <= 0)
        return (0);
    while (i * i <= nb)
    {
        ++i;
    if (i * i == nb)
        return (i);
    }        
    return (0);
}

#include <stdio.h>

int main()
{
    printf("%d sqrt \n", ft_sqrt(20));
    printf("%d sqrt \n", ft_sqrt(9));
    printf("%d sqrt \n", ft_sqrt(16));
    printf("%d sqrt \n", ft_sqrt(256));
}