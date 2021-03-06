/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeaujar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 07:59:12 by sbeaujar          #+#    #+#             */
/*   Updated: 2021/02/14 08:09:24 by sbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

int		ft_parse_arguments(char *argv)
{
	int		n;
	int		square;
	int		state;

	n = 0;
	state = TRUE;
	while (*argv)
	{
		if (*argv == ' ')
			state = TRUE;
		else
		{
			if (state)
				++n;
			state = FALSE;
		}
		++argv;
	}
	if ((square = ft_sqrt(n)) <= FALSE)
		return (-1);
	return (square);                                           
}

int		ft_atoi_ptr(char **str)
{
	int		sum;

	sum = 0;
	while (**str && **str == ' ')
		(*str)++;
	while (**str && **str >= '0' && **str <= '9')
		sum = (sum * 10) + (*(*str)++ - '0');
	return (sum);
}

int		*ft_argvtoarr(char *argv)
{
	int		*ret;
	int		i;

	ret = (int *)malloc(sizeof(int) * 16);
	i = -1;
	while (*argv && ++i < 16)
		ret[i] = ft_atoi_ptr(&argv);
	return (ret);
}

int		**ft_populate_args(char *argv)
{
	int		**ret;
	int		*tmp;
	int		i;
	int		k;

	ret = (int **)malloc(sizeof(int *) * 4);
	i = -1;
	while (++i < 4)
		ret[i] = (int *)malloc(sizeof(int) * 4);
	tmp = ft_argvtoarr(argv);
	i = -1;
	k = -1;
	while (++i < 4)
		ret[TOP][i] = tmp[++k];
	i = -1;
	while (++i < 4)
		ret[BOTTOM][i] = tmp[++k];
	i = -1;
	while (++i < 4)
		ret[LEFT][i] = tmp[++k];
	i = -1;
	while (++i < 4)
		ret[RIGHT][i] = tmp[++k];
	free(tmp);
	return (ret);
}
