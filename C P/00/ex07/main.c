#include <stdio.h>
#include <unistd.h>
#include "ft_putnbr.c"

int main()
{
	int i;
	i = -2147483658;
	ft_putnbr(i);
//	printf("%d", i);
}