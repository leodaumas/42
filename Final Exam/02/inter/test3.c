#include <unistd.h>

int		comp(char *s1, char c, int index)
{
	int i;

	i = 0;
	while(i < index)
	{
		if(s1[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void	inter(char *s1,char *s2)
{
	int i;
	int j;

	i = 0;
	while(s1[i])
	{
		if(comp(s1,s1[i],i) == 0)
		{
			j = 0;
			while(s2[j])
			{
				if (s1[i] == s2[j])
				{
					write( 1, &s1[i], 1);
					break;
				}
				j++;
			}
		}
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 3)
	{
		inter(av[1], av[2]);
	}
	write( 1, "\n", 1);
	return (0);
}