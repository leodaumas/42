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

char g_first_array = 1;
char g_delimiter_2[] = ", ";

void	print_numbers(char array[], int digit)
{
	if (g_first_array)
	{
		write(1, array, digit);
		g_first_array = 0;
	}
	else
	{
		write(1, g_delimiter_2, 2);
		write(1, array, digit);
	}
}

void	recur(char array[], int index, int digit)
{
	int k;
	int start;

	if (index == digit)
	{
		print_numbers(array, digit);
	}
	else
	{
		if (index == 0)
		{
			start = '0';
		}
		else
		{
			start = array[index - 1] + 1;
		}
		k = start;
		while (k <= '9')
		{
			array[index] = k;
			recur(array, index + 1, digit);
			k++;
		}
	}
}

void	ft_print_combn(int digit)
{
	char array[digit];
	int index;

	index = 0;
	recur(array, index, digit);
}
