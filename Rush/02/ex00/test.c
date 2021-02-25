/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegadri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 16:30:49 by adegadri          #+#    #+#             */
/*   Updated: 2021/02/21 11:33:58 by adegadri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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

void	ft_convert1(char *str)
{
	int i;
	int size;
	char tab[12][100000] = {"ten" , "eleven" , "twelve", "thirteen" ,"fourteen", "fifteen",  "sixteen", "seventeen","eighteen ","nineteen"};
	char *error;

	i = 0;
	size = ft_strlen(str);
	error = "ERROR";
	if (ft_check(str) == 1)
	{
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
	else
		putstr(error);
}

void	**ft_convert(char *str)
{
	int i;
	char tab[12][100000] = {"zero" , "one" , "two", "three" ,"four", "five",  "six", "seven","eight ","nine"};
	char *error;
	
	i = 0;
	error = "ERROR";
	if (ft_check(str) == 1)
	{	
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
	else
		putstr(error);
	return (0);	
}

void	ft_rush(char *str)
{
	int i;
	int size;
	
	i = 0;
	printf("\n%d\n", ft_strlen(str));
	size = ft_strlen(str);
	while (str[i] != '\0')
	{
		if (size <= 2)
			ft_convert(str);
		if (size <= 3 && str[i - 1] == 1) 
			ft_convert1(str);
		i++;
	}
}

int		main(int argc, char **argv)
{

	if (argc == 2)
	{
		ft_rush(argv[1]);
		ft_putchar('\n');		
	}

}
