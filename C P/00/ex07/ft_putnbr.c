/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaumas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 13:28:48 by ldaumas           #+#    #+#             */
/*   Updated: 2021/02/08 16:23:16 by ldaumas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char ch)
{
	write(1, &ch, 1);
}

int		ft_convertnegative(int nbr)
{
	if (nbr == -2147483648)
	{
		nbr = nbr - 1;
	}
	else if (nbr < 0)
	{
		nbr = nbr * -1;
	}
	return (nbr);
}

void	ft_put_nbr(int nbr)
{
	int nb;
	int mod1;

	nb = nbr;
	nb = ft_convertnegative(nb);
	if (nb >= 10)
	{
		ft_put_nbr(nb / 10);
		mod1 = nb % 10;
		if (nbr == -2147483648)
		{
			mod1 = mod1 + 1;
			ft_putchar(mod1 + '0');
		}
		else
			ft_putchar(mod1 + '0');
	}
	else
	{
		ft_putchar(nb + '0');
		nb = 0;
	}
}

void	ft_putnbr(int nb)
{
	if (nb > 0 && nb < 2147483647) 
	{
		ft_put_nbr(nb);
	}
	else if (nb < 0 && nb >= -2147483648)
	{
		write(1, "-", 1);
		ft_put_nbr((nb));
	}
	else
}
