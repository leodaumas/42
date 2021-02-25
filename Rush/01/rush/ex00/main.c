/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeaujar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 07:58:03 by sbeaujar          #+#    #+#             */
/*   Updated: 2021/02/14 08:00:19 by sbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

int		main(int argc, char **argv)
{
	int		**tab;
	int		**cond;
	int		n;

	if (argc == 2)
	{
		if ((n = ft_parse_arguments(argv[1])) != -1)
		{
			tab = ft_populate_table(n);
			cond = ft_populate_args(argv[1]);
			if (ft_backtrack(tab, cond, 0))
				return (ft_print_population(&tab, n));
		}
		ft_putstr("Error\n");
	}
	return (EXIT_SUCCESS);
}
