#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while(*str)
	{
		str++;
		i++;
	}
	return(i);
}

int		ft_alphacheck(char c)
{
	int size;

	size = 0;
	if (c >= 'a' && c <= 'z')
	{
		size = c - 97;
	}
	else if (c >= 'A' && c <= 'Z')
	{
		size = c - 65;
	}
	return (size);
}

int		main(int argc, char **argv)
{
	int i;
	int j;
	int size;
	int alpha;

	j = 0;
	i = 0;
	if(argc == 2)
	{
		size = ft_strlen(argv[1]);
		while(i < size)
		{
			alpha = ft_alphacheck(argv[1][i]) + 1;
			if(alpha > 0)
			{
				j = 0;
				while(j < alpha)
				{
					write( 1, &argv[1][i], 1);
					j++;
				}
			}
			i++;
		}
	}
	write( 1, "\n", 1);
	return (0);
}