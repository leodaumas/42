/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeaujar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 08:03:13 by sbeaujar          #+#    #+#             */
/*   Updated: 2021/02/14 08:00:07 by sbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

int		**ft_populate_table(int n)
{
	int		x;
	int		y;
	int		**ret;

	ret = (int **)malloc(sizeof(int *) * n);
	x = -1;
	while (++x < 4)
	{
		y = -1;
		ret[x] = (int *)malloc(sizeof(int) * n);
		while (++y < 4)
			ret[x][y] = 0;
	}
	return (ret);
}

int		ft_print_population(int ***tab, int n)
{
	int		x;
	int		y;

	x = -1;
	while (++x < n)
	{
		y = -1;
		while (++y < n)
		{
			ft_putnbr((*tab)[x][y]);
			if (y < 3)
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
	free(*tab);
	return (EXIT_SUCCESS);
}
