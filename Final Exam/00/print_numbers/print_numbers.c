#include <unistd.h>

void	ft_print_numbers()
{
	int i;
	char c;

	i = 0;
	while (i <= 9)
	{
		c = i + '0';
		write( 1, &c, 1);
		i++;
	}
}

int main()
{
	ft_print_numbers();

	return (0);
}