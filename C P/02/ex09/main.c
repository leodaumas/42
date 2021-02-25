#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "ft_strcapitalize.c"
int main()
{
    char c[100] = "salUt, coMment tu vas ? 42mots quarantE-deux; cinquante+et+un";
    //ft_strcapitalize(c);
    printf("%s",ft_strcapitalize(c));
    //char d[] = "Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un";
    //printf("\n%s", ft_strcapitalize(d));
}