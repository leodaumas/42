#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char ch)
{
	write(1, &ch, 1);
}

int	ft_count(int nb)
{
	int count;

	count = 0;
	while(nb > 0)
	{
		nb = nb / 10;
		count++;
	}
	return (count);
}

void	ft_put_nbr(int nbr)
{
	int length;

	int index;

	index = 0;
	length = ft_count(nbr);
	int array[length];
	array[] = nbr;

	while (x < length)
	{
		array[index] = nbr
	}

	while (length > 0)
	{
		ft_putchar(array[index] + '0');
		printf("Array: %d, Length: %d, Index: %d\n",array[], length, index);
		length--;
		index++;
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
