#include "ft.h"
#include <stdio.h>

int main()
{
    int a = 1;
    int b = 2;
    char c[100] = "Hello";
    char d = '!';
    char e[100] = "Hey";
    printf("a: %d b:%d\n", a, b);
    ft_swap(&a, &b);
    printf("a: %d b:%d\n", a, b);
    ft_putstr(c);
    ft_putchar(d);
    printf("%d", ft_strlen(c));
    printf("%d", ft_strcmp(c, e));
}

//gcc *.c && ./a.out