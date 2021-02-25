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

char firstarr = 1;
char delimit[] = ", ";

void	print_numbers(char arr[], int dig)
{
	if (firstarr)
	{
		write(1, arr, dig);
		firstarr = 0;
	}
	else
	{
		write(1, delimit, 2);
		write(1, arr, dig);
	}
}

void	recur(char arr[], int i, int dig)
{
	int k;
	int s;

	if (i == dig)
	{
		print_numbers(arr, dig);
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
			recur(arr, i + 1, dig);
			k++;
		}
	}
}

void	ft_print_combn(int dig)
{
	char array[dig];
	int i;

	i = 0;
	recur(array, i, dig);
}
