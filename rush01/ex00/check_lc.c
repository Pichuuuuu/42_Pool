/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_lc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamather <tamather@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 19:36:53 by tamather          #+#    #+#             */
/*   Updated: 2019/07/14 20:52:06 by tamather         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		check_col(char **tab, char t, int x, int size)
{
	int i;

	i = 4;
	while (i < size + 4)
		if (t == tab[i++][x])
			return (0);
	return (1);
}

int		check_line(char **tab, char t, int y, int size)
{
	int i;

	i = 0;
	while (i < size)
		if (t == tab[y + 4][i++])
			return (0);
	return (1);
}
