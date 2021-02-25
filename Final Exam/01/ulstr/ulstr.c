#include <unistd.h>

char	ft_reverse(char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	else if (c >= 'A' && c <= 'Z')
		c += 32;

	write( 1, &c, 1);
	return(c);	
}

int		ft_len(char *str)
{
	int i;

	i = 0;
	while(*str)
	{
		str++;
		i++;
	}
	return (i);
}

int main (int argc, char **argv)
{
	int i;
	int j;
	char *str;

	j = 0;
	i = 0;
	str = argv[1];
	if (argc == 2)
	{
		i = ft_len(str);
		while (j < i)
		{
			ft_reverse(str[j]);
			j++;
		}
	}
	write( 1,"\n", 1);
	return (0);
}