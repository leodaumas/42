#include <stdio.h>
#include "ft_strupcase.c"

int main()
{
    char c[] = "haa2us";
    printf("%s", ft_strupcase(c));
    char d[] = "abcefghijklmniojpqrstuxyz";
    printf("\n%s", ft_strupcase(d));
}