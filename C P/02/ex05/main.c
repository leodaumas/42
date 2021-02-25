#include <stdio.h>
#include "ft_str_is_uppercase.c"

int main()
{
    char c[] = "ASODHOAISD";
    printf("It is uppercase: %d\n",ft_str_is_uppercase(c));
    char d[] = "AAola";
    printf("It isnt uppercase: %d\n",ft_str_is_uppercase(d));
    char x[] = "";
    printf("It is empty: %d\n",ft_str_is_uppercase(x));
}