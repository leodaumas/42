/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaumas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 08:18:10 by ldaumas           #+#    #+#             */
/*   Updated: 2021/02/09 10:26:39 by ldaumas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_numbers(char arr[], int dig)
{
	int firstarr;

	firstarr = firstarr + 1;
	if (firstarr == 1)
	{
		write(1, arr, dig);
	}
	else
	{
		write(1, ", ", 2);
		write(1, arr, dig);
	}
}

void	recursive(char arr[], int i, int dig)
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
			recursive(arr, i + 1, dig);
			k++;
		}
	}
}

void	ft_print_combn(int dig)
{
	char array[dig];
	int i;

	i = 0;
	recursive(array, i, dig);
}
