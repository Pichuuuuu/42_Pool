/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamather <tamather@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 21:02:28 by tamather          #+#    #+#             */
/*   Updated: 2019/07/22 09:13:35 by tamather         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		brute_force(char **tab, int size, int p)
{
	int i;
	int x;
	int y;

	i = 1;
	y = p / size;
	x = p % size;
	if (p == size * size)
		return (1);
	while (i <= size)
	{
		if (check_col(tab, i + '0', x, size)
			&& check_line(tab, i + '0', y, size))
		{
			tab[y + 4][x] = i + '0';
			if (is_good(tab, size, p))
				return (1);
			tab[y + 4][x] = '0';
		}
		i++;
	}
	return (0);
}

int		is_good(char **tab, int size, int p)
{
	int y;
	int x;

	y = p / size;
	x = p % size;
	if ((check_line_lr_pile(tab, x, y, size)
	&& check_line_rl_pile(tab, x, y, size)))
		if (check_col_ud_pile(tab, y, size) && check_col_du_pile(tab, x, size))
			if (brute_force(tab, size, p + 1))
				return (1);
	return (0);
}
