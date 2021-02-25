#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while(argv[1][i] != '\0')
		{
			if(argv[1][i] == 97)
			{
				write( 1,"a", 1);
				write( 1,"\n", 1);
				printf("%d", i);
				return (0);
			}
			i++;
		}
	}
	if (argc > 2)
		write( 1, "a", 1);
	write( 1,"\n", 1);
	return (0);
}