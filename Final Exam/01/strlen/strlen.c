int ft_strlen(char *str)
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

#include <stdio.h>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%d", ft_strlen(argv[1]));
	}
	return (0);
}