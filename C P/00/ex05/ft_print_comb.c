/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaumas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 15:04:49 by ldaumas           #+#    #+#             */
/*   Updated: 2021/02/06 08:00:33 by ldaumas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char un, char de, char ce)
{
	write(1, &ce, 1);
	write(1, &de, 1);
	write(1, &un, 1);
	if (ce < '7')
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char ce;
	char de;
	char un;

	ce = '0';
	while (ce <= '7')
	{
		de = '1';
		while (de <= '8')
		{
			un = '2';
			while (un <= '9')
			{
				if (un > de && de > ce)
					ft_putchar(un, de, ce);
				un++;
			}
			de++;
		}
		ce++;
	}
}
