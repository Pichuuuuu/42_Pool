/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamather <tamather@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 19:42:11 by tamather          #+#    #+#             */
/*   Updated: 2019/07/22 09:13:33 by tamather         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

char	**make_tab(char *str, int size)
{
	int		i;
	int		j;
	int		p;
	char	**tab;

	i = 0;
	p = 0;
	if (!(tab = malloc(sizeof(char*) * (size + 4))))
		return (0);
	while (i < (size + 4))
		if (!(tab[i++] = malloc(sizeof(char) * size)))
			return (0);
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < size)
		{
			tab[i][j++] = str[p];
			p = p + 2;
		}
		tab[i++][j] = '\0';
	}
	return (tab);
}

void	combl_tab(char **tab, int size)
{
	int i;
	int j;

	i = 4;
	while (i < (size + 4))
	{
		j = 0;
		while (j < size)
			tab[i][j++] = '0';
		tab[i++][j] = '\0';
	}
}

void	free_tab(char **tab, int size)
{
	int i;

	i = 0;
	while (i < size + 4)
		free(tab[i++]);
	free(tab);
}
