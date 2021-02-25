#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_putnbr(int nb)
{
	long	nbr;

	if(nb == -2147483648)
		ft_putstr("-2147483648");
	else if(nb != -2147483648)
	{
		if ((nbr = nb) < 0)
		{
			nbr = -nb;
			ft_putchar('-');
		}
		if (nbr >= 10)
			ft_putnbr((int)(nbr / 10));
			ft_putchar(nbr % 10 + '0');
	}
}
