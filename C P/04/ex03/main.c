#include <stdio.h>
#include <unistd.h>
#include "ft_atoi.c"

int main()
{
	char c[100] = "   ---+--+1234ab567";
	printf("%d",ft_atoi(c));
}