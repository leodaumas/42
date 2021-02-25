#include <stdio.h>
#include "ft_div_mod.c"

int main()
{
	int a = 15;
	int b = 4;
	printf("%d %d", a, b);
	ft_div_mod(a, b, &a, &b);
	printf(" - %d %d", a, b);
}
//working