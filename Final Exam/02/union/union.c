#include <unistd.h>
#include <stdio.h>

int main (int ac, char **av)
{
	int i;
	int j;
	int k;

	i = 0;
	k = 0;
	j = 0;
	if (ac == 3)
	{
		while (av[1][i])
		{
			if (av[1][i] == av[1][j])
			{
				if (i >= j)
				{
					while (av[2][k])
					{
						if (av[1][i] == av[2][k])
						{
							write( 1, &av[1][i], 1);
						}
						k++;
					}
				}
			}
			i++;
			j++;
		}
	//	printf("print: %s %s", av[1], av[2]);
	}
	write( 1, "\n", 1);
	return (0);
}