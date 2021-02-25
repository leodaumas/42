#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char ch)
{
	write(1, &ch, 1);
}

void	ft_put_nbr(int nbr)
{
		int nb = nbr;
		int nbx = nbr;

	while (nb != 0)
	{
		if (nb > 10){
			nb = nb % 10;
			ft_putchar(nb + '0');
			nb = nbx - nb;
			nb = nb / 10;
			nbx = nb;
//			printf("NB %d NBX %d\n",nb, nbx);
		}
		else
		{
			ft_putchar(nb + '0');
			nb = 0;

		}
	}
}

void	ft_putnbr(int nb)
{
	if (nb < 32767 && nb > 0)
	{
		ft_put_nbr(nb);
	}
	else if (nb < 0 && nb > -32767)
	{
		write(1, "-", 1);
		ft_put_nbr((nb * -1));
	}
}
