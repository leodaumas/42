/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeaujar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 08:03:13 by sbeaujar          #+#    #+#             */
/*   Updated: 2021/02/14 15:57:58 by sbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

int		**ft_populate_table(void)
{
	int		x;
	int		y;
	int		**ret;

	ret = (int **)malloc(sizeof(int *) * 4);
	x = -1;
	while (++x < 4)
	{
		y = -1;
		ret[x] = (int *)malloc(sizeof(int) * 4);
		while (++y < 4)
			ret[x][y] = 0;
	}
	return (ret);
}

int		ft_print_population(int ***tab, int ***cond)
{
	int		x;
	int		y;

	x = -1;
	while (++x < 4)
	{
		y = -1;
		while (++y < 4)
		{
			ft_putnbr((*tab)[x][y]);
			if (y < 3)
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
	free(*tab);
	free(*cond);
	return (EXIT_SUCCESS);
}
