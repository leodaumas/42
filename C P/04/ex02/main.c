#include <stdio.h>
#include <unistd.h>
#include "ft_putnbr.c"


int main()
{
	long int i;
    i = 0;
	i = -2147483648;
	ft_putnbr(i);
	printf("\n");
	ft_putnbr(10);
	printf("\n");
	ft_putnbr(-2147483647);
	printf("\n");
	ft_putnbr(2147483647);
	printf("\n");
	ft_putnbr(2147483647);
	printf("\n");
//	printf("%d", i);
}