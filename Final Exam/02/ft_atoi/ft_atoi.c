#include <xlocale.h>
#include <stdio.h>
#include <unistd.h>

int		ft_atoi(const char *str)
{
	int i;
	int sign;
	int nbr;

	nbr = 0;
	sign = 1;
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))// || str[i] == '\n' || str[i] == '\v' || str[i] == '\r' || str[i] == '\f') while (*s == 32 || (*s >= 9 && *s <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
//		printf("%d\n", nbr);
		nbr = nbr * 10 + str[i] - '0';
		i++;
	}

	return (sign * nbr);
}

int 	main (int ac, char **av)
{
		printf("%d\n",ft_atoi("    \n\n\v\f\r\t -5234AAAgreghrsth"));
}