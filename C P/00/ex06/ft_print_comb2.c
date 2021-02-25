/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaumas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 12:31:14 by ldaumas           #+#    #+#             */
/*   Updated: 2021/02/06 13:58:57 by ldaumas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char ch)
{
	write(1, &ch, 1);
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

void	ft_print_comb2(void)
{
	int n1;
	int n2;

	n1 = 0;
	while (n1 <= 98)
	{
		n2 = 1;
		while (n2 <= 99)
		{
			if (n1 < n2)
			{
				ft_put_nbr(n1);
				write(1, " ", 1);
				ft_put_nbr(n2);
			}
			if (n2 > n1 && n1 < 98)
				write(1, ", ", 2);
			n2++;
		}
		n1++;
	}
}
