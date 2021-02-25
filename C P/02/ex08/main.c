#include <stdio.h>
#include "ft_strlowcase.c"

int main()
{
    char c[] = " sALUt tOutS !";
    printf("%s", ft_strlowcase(c));
    char d[] = "salut, coMMent tu vas ? 42MOts quarante-deux; cinquante+et+un";
    printf("\n%s", ft_strlowcase(d));
}