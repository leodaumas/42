/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegadri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 11:36:54 by adegadri          #+#    #+#             */
/*   Updated: 2021/02/21 14:21:00 by adegadri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_scan(char *str)
{
	int i;
	int j;
	int size;

	i = 0;
	j = 0;
	size = ft_strlen(str);
	if (size == 1)
		ft_convert(str);
	if (size == 2 && str[0] == '1' )
		ft_convert1(str);
	if (size == 2 && str[0] != '1')
	{	
		ft_convert2(str);
		ft_convert(str);
	}
}

int		main(int argc, char **argv)
{
	char *error;
	error = "ERROR";

	if (argc == 2 && ft_check(argv[1]) == 1)
	{
		ft_scan(argv[1]);
		ft_putchar('\n');
	}
	else
		putstr(error);
}
