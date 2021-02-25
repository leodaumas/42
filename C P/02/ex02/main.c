#include "ft_str_is_alpha.c"
#include <stdio.h>

int main()
{
    char c[] = "abcdefghijklmnopqrxuvzABCDESFGHIJKLMNOPQRSTUVXYZ";
    printf("Only letters: %d\n",ft_str_is_alpha(c));
    char d[] = "ol AAola";
    printf("There is a non alphabetical character: %d\n",ft_str_is_alpha(d));
   // printf("%s",c);
}