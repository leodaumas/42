#include <unistd.h>

void	ft_putchar(char c)
{
	write( 1, &c, 1);
}

void	ft_putstr(char *str)
{
	while(*str)
	{
		ft_putchar(*str++);
	}
}

void	ft_rstr_capitalizer(char *str)
{
	int i;
	int flag;
	
	flag = 0;
	i = 0;
	while(str[i] != '\0')
	{
		if (!(str[i] == ' ' || str[i] == '\t'))
		{
			if((str[i+1] == ' ' || str[i+1] == '\t') && (str[i] >= 'a' && str[i] <= 'z'))
			{	
				ft_putchar(str[i] - 32);
				i++;
			}
			else
			{
				ft_putchar(str[i]);
				i++;
			}
		}
		else if (str[i] == ' ' || str[i] == '\t')
		{
			flag = 1;
			if (str[i+1] == ' ' || str[i+1] == '\t')
			{
				i++;
			}
			else
			{
				if(str[i+1] == '\0')
					break;
				else
					{
					ft_putstr(" ");
					i++;
					}
			}
		}	
	}
}

int main(int ac, char **av)
{
	int i;
	
	i = 1;
	if (ac >= 2)
	{
		while (i < ac)
		{
			ft_rstr_capitalizer(av[i]);
			ft_putstr(" ");
			i++;
		}
	}
	write( 1, "\n", 1);
	return (0);
}