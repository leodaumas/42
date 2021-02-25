/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaumas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 08:18:10 by ldaumas           #+#    #+#             */
/*   Updated: 2021/02/08 08:19:49 by ldaumas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char firstarr;
char delimit[];

delimit[] = ", ";
firstarr = 1;
void	print_numbers(char arr[], int d)
{
	if (firstarr)
	{
		write(1, arr, d);
		firstarr = 0;
	}
	else
	{
		write(1, delimit, 2);
		write(1, arr, d);
	}
}

void	recur(char arr[], int i, int d)
{
	int k;
	int s;

	if (i == d)
	{
		print_numbers(arr, d);
	}
	else
	{
		if (i == 0)
		{
			s = '0';
		}
		else
		{
			s = arr[i - 1] + 1;
		}
		k = s;
		while (k <= '9')
		{
			arr[i] = k;
			recur(arr, i + 1, d);
			k++;
		}
	}
}

void    ft_print_combn(int d)
{
    char arr[d];
    int i;

    i = 0;
    recur(arr, i, d);
}
