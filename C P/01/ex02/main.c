#include <stdio.h>
#include "ft_swap.c"

int main()
{
	int a = 1;
	int b = 2;
	printf("%d %d", a, b);
	ft_swap(&a,&b);
	printf(" - %d %d", a, b);
}

//working