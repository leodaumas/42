#include <stdio.h>
#include "ft_str_is_numeric.c"
#include <stdlib.h>

int main()
{
    char c[] = "01234567899";
    printf("It is numeric: %d\n", ft_str_is_numeric(c));

        char d[] = "121asdads23123";
    printf("It isnt numeric: %d", ft_str_is_numeric(d));

            char x[] = "";
    printf("\nIt is empty: %d", ft_str_is_numeric(x));
}