/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_pile.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamather <tamather@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 19:38:01 by tamather          #+#    #+#             */
/*   Updated: 2019/07/14 20:57:52 by tamather         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		check_col_ud_pile(char **tab, int x, int size)
{
	int		i;
	char	t;
	char	c;

	i = 0;
	t = 0;
	c = 0;
	while (i < size)
	{
		if (tab[i + 4][x] == '0')
			return (1);
		if (tab[i + 4][x] > t)
		{
			t = tab[i + 4][x];
			c++;
		}
		i++;
	}
	if ((c + '0') == tab[0][x])
		return (1);
	return (0);
}

int		check_col_du_pile(char **tab, int x, int size)
{
	int		i;
	char	t;
	int		c;

	i = size;
	t = 0;
	c = 0;
	while (0 < i)
	{
		if (tab[i + 3][x] == '0')
			return (1);
		if (tab[i + 3][x] > t)
		{
			t = tab[i + 3][x];
			c++;
		}
		i--;
	}
	if ((c + '0') == tab[1][x])
		return (1);
	return (0);
}

int		check_line_lr_pile(char **tab, int x, int y, int size)
{
	int		i;
	char	t;
	int		c;

	i = 0;
	t = 0;
	c = 0;
	while (i < size)
	{
		if (x != size)
			return (1);
		if (tab[y + 4][i] > t)
		{
			t = tab[y + 4][i];
			c++;
		}
		i++;
	}
	if ((c + '0') == tab[2][y])
	{
		return (1);
	}
	return (0);
}

int		check_line_rl_pile(char **tab, int x, int y, int size)
{
	int		i;
	char	t;
	int		c;

	i = size;
	t = 0;
	c = 0;
	while (0 < i)
	{
		if (x != size)
			return (1);
		if (tab[y + 4][i] > t)
		{
			t = tab[y + 4][i];
			c++;
		}
		i--;
	}
	if ((c + '0') == tab[3][y])
		return (1);
	return (0);
}
