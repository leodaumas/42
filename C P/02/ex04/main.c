#include <stdio.h>
#include "ft_str_is_lowercase.c"

int main()
{
    char c[] = "olola";
    printf("It is lowercase: %d\n",ft_str_is_lowercase(c));
    char d[] = "olAAola";
    printf("It isnt lowercase: %d\n",ft_str_is_lowercase(d));
   char x[] = { '\0' };
    printf("It is empty: %d\n",ft_str_is_lowercase(x));
}