#include <stdio.h>
#include "ft_ultimate_div_mod.c"

int main()
{
	int a = 15;
	int b = 4;
	printf("%d %d", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf(" - %d %d", a, b);
}
//working - maybe code should be checked