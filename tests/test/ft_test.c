#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_nbr(int nbr)
{
	if (nbr < 10)
	{
		ft_putchar('0');
		ft_putchar(nbr + '0');
	}
	else
	{
		ft_putchar(nbr / 10 + '0');
		ft_putchar(nbr % 10 + '0');
	}
}


void	ft_number(int x)
{
	int n2 = 99;
	int arr[n2];
	int e;

	e = 0;
	do
	{
		arr[e] = e;	
		e++;
	}while( e <= n2);
	ft_put_nbr(arr[x]);
/*	printf("%02d", arr[x]);*/
}

int main(void)
{
	int x1, x2, nn;

	x1 = 0;
	x2 = 0;
	while (x1 <= 99)
	{
		while(x2 <=  98)
		{
			ft_number(x2);
			write(1, " ", 1);
			ft_number(x1);
			write(1, ", ", 2);
			x2++;
		}
		x1++;
		x2=x1;
	}
}
