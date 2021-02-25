/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeaujar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 09:03:26 by sbeaujar          #+#    #+#             */
/*   Updated: 2021/02/14 16:24:01 by sbeaujar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIB_H
# define FT_LIB_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

# define TRUE			1
# define FALSE			0

# define TOP			0
# define BOTTOM			1
# define LEFT			2
# define RIGHT			3

/*
**				FT_CORE.c
*/

int		ft_backtrack(int **tab, int **cond, int iter);

/*
**				FT_PARSE.c
*/

int		**ft_populate_args(char *argv);
int		ft_parse_arguments(char *argv);

/*
**				FT_STRING.c
*/

void	ft_putnbr(int nb);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);

/*
**				FT_TAB.c
*/

int		**ft_populate_table(void);
int		ft_print_population(int ***tab, int ***cond);

#endif
