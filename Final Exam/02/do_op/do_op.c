#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main (int ac, char **av)
{
	int valueone;
	int valuetwo;

	valueone = 0;
	valuetwo = 0;
	if (ac == 4)
	{
		if(av[2][0] == '+')
		{
			printf("%d\n", atoi(av[1]) + atoi(av[3]));
		}
		if(av[2][0] == '-')
		{
			printf("%d\n", atoi(av[1]) - atoi(av[3]));
		}
		if(av[2][0] == '*')
		{
			printf("%d\n", atoi(av[1]) * atoi(av[3]));
		}
		if(av[2][0] == '/')
		{
			printf("%d\n", atoi(av[1]) / atoi(av[3]));
		}
		if(av[2][0] == '%')
		{
			printf("%d\n", atoi(av[1]) % atoi(av[3]));
		}
	}
	if (ac != 4)
		write( 1, "\n", 1);
	return (0);
}