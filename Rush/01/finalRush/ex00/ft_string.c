/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeaujar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 07:58:20 by sbeaujar          #+#    #+#             */
/*   Updated: 2021/02/14 16:23:53 by sbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

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

	if ((nbr = nb) < 0)
	{
		nbr = -nb;
		ft_putchar('-');
	}
	if (nbr >= 10)
		ft_putnbr((int)(nbr / 10));
	ft_putchar(nbr % 10 + '0');
}

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (*str++)
		++i;
	return (i);
}
