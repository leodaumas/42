int	ft_atoi(char *str)
{
	int		nombre;
	int		signe;
	char	*charptr;

	nombre = 0;
	signe = 1;
	charptr = str;
	while (*charptr == ' ' || (*charptr >= 9 && *charptr <= 13))
		charptr++;
	while (*charptr == '-' || *charptr == '+')
	{
		if (*charptr == '-')
			signe *= -1;
		charptr++;
	}
	while (*charptr >= '0' && *charptr <= '9')
	{
		nombre *= 10;
		nombre += (int)(*charptr - '0');
		charptr++;
	}
	return (nombre * signe);
}

#include <stdio.h>
#include <unistd.h>

int main()
{
    char a[100] = "   ---+--+1234ab567";
	char b[100] = "   ---+---1234ab567";
	char c[100] = "   ---+--+1234";
    printf("%d\n",ft_atoi(a));
    printf("%d\n",ft_atoi(b));
    printf("%d\n",ft_atoi(c));
}