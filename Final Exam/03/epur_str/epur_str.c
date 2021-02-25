#include <unistd.h>
#include <stdio.h>

int		ft_isblank(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	if (c >= 9 && c <= 13)
		return (1);
	return (0);
}

int		ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	epur_str(char *str)
{
	int i;
	int cbegin;
	int cend;
	int flag;

	flag = 0;
	cbegin = 0;
	cend = 0;
	i = 0;
	while((ft_isblank(str[i])) == 1)
	{
		i++;
		cbegin = i;
	}

	i = ft_strlen(str) - 1;
	while((ft_isblank(str[i])) == 1)
	{	
		i--;
		cend = i;
	}

	i = cbegin;
	while(i <= cend)
	{
		if (ft_isblank(str[i]) == 1 && flag == 1)
		{
			flag = 0;
			write( 1, " ", 1);
			i++;
		}
		else if (ft_isblank(str[i]) == 0)
		{
			flag = 1;
			write( 1, &str[i], 1);
			i++;
		}
		else
			i++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		epur_str(av[1]);
	}
	write( 1, "\n", 1);
}