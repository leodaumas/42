/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_core.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeaujar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 08:52:14 by sbeaujar          #+#    #+#             */
/*   Updated: 2021/02/14 12:17:10 by sbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

int		ft_is_unique(int **tab, int row, int col)
{
	int		i;

	i = -1;
	while (++i < 4)
		if ((i != col && tab[row][i] == tab[row][col]) ||
			(i != row && tab[i][col] == tab[row][col]))
			return (FALSE);
	return (TRUE);
}

int		ft_check_row(int **tab, int **cond, int dir, int is_rev)
{
	int		col;
	int		row;
	int		max;
	int		sum;

	row = -1;
	while (++row < 4)
	{
		if (cond[dir][col] != FALSE)
		{
			sum = 0;
			max = 0;
			col = is_rev == TRUE ? 0 : 3;
			while ((is_rev && col < 4) || (!is_rev && col >= 0))
			{
				if (tab[row][col] > max && \
					(max = tab[row][col]) == tab[row][col])
					++sum;
				col += is_rev ? 1 : -1;
			}
			if (cond[dir][row] != sum)
				return (FALSE);
		}
	}
	return (TRUE);
}

int		ft_check_col(int **tab, int **cond, int dir, int is_rev)
{
	int		col;
	int		row;
	int		max;
	int		sum;

	col = -1;
	while (++col < 4)
	{
		if (cond[dir][col] != FALSE)
		{
			sum = 0;
			max = 0;
			row = is_rev == TRUE ? 3 : 0;
			while ((is_rev && row >= 0) || (!is_rev && row < 4))
			{
				if (tab[row][col] > max && \
					(max = tab[row][col]) == tab[row][col])
					++sum;
				row += is_rev ? -1 : 1;
			}
			if (cond[dir][col] != sum)
				return (FALSE);
		}
	}
	return (TRUE);
}

int		ft_backtrack(int **tab, int **cond, int iter)
{
	int		row;
	int		col;
	int		i;

	if (iter == 16)
	{
		return (ft_check_col(tab, cond, BOTTOM, TRUE)
				&& ft_check_col(tab, cond, TOP, FALSE)
				&& ft_check_row(tab, cond, LEFT, TRUE)
				&& ft_check_row(tab, cond, RIGHT, FALSE));
	}
	row = iter / 4;
	col = iter % 4;
	i = 1;
	while (i <= 4)
	{
		tab[row][col] = i;
		i++;
		if (ft_is_unique(tab, row, col) && ft_backtrack(tab, cond, iter + 1))
			return (TRUE);
	}
	tab[row][col] = 0;
	return (FALSE);
}
