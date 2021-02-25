/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaumas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 11:25:38 by ldaumas           #+#    #+#             */
/*   Updated: 2021/02/11 11:38:59 by ldaumas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int index;
	int result;

	index = 0;
	result = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			result = 1;
		}
		else if (str[index] >= 'A' && str[index] <= 'Z')
		{
			result = 1;
		}
		else
		{
			result = 0;
			break ;
		}
		index++;
	}
	return (result);
}
