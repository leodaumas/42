/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegadri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 11:50:57 by adegadri          #+#    #+#             */
/*   Updated: 2021/02/21 14:20:52 by adegadri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_check(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_convert(char *str)
{
	int i;
	char tab[12][100000] = {"zero" , "one" , "two", "three" ,"four", "five",  "six", "seven","eight ","nine"};

	i = 0;
	if (str[i] == '0')
		putstr(tab[0]);
	if (str[i] == '1')
		putstr(tab[1]);
	if (str[i] == '2')
		putstr(tab[2]);
	if (str[i] == '3')
		putstr(tab[3]);
	if (str[i] == '4')
		putstr(tab[4]);
	if (str[i] == '5')
		putstr(tab[5]);
	if (str[i] == '6')
		putstr(tab[6]);
	if (str[i] == '7')
		putstr(tab[7]);
	if (str[i] == '8')
		putstr(tab[8]);
	if (str[i] == '9')
		putstr(tab[9]);
}

void	ft_convert1(char *str)
{
	int i;
	char tab[12][100000] = {"ten" , "eleven" , "twelve", "thirteen" ,"fourteen", "fifteen",  "sixteen", "seventeen","eighteen ","nineteen"};

	i = 2;
	if (str[i] == '0')
		putstr(tab[0]);
	if (str[i] == '1')
		putstr(tab[1]);
	if (str[i] == '2')
		putstr(tab[2]);
	if (str[i] == '3')
		putstr(tab[3]);
	if (str[i] == '4')
		putstr(tab[4]);
	if (str[i] == '5')
		putstr(tab[5]);
	if (str[i] == '6')
		putstr(tab[6]);
	if (str[i] == '7')
		putstr(tab[7]);
	if (str[i] == '8')
		putstr(tab[8]);
	if (str[i] == '9')
		putstr(tab[9]);
}

void	ft_convert2(char *str)
{
	int i;
	char tab[12][100000] = {"twenty" , "thirty" , "forty", "fifty",  "sixty", "seventy","eighty","ninety"};

	i = 0;
	if (str[i] == '2')
		putstr(tab[0]);
	if (str[i] == '3')
		putstr(tab[1]);
	if (str[i] == '4')
		putstr(tab[2]);
	if (str[i] == '5')
		putstr(tab[3]);
	if (str[i] == '6')
		putstr(tab[4]);
	if (str[i] == '7')
		putstr(tab[5]);
	if (str[i] == '8')
		putstr(tab[6]);
	if (str[i] == '9')
		putstr(tab[7]);
	ft_putchar(' ');
}
