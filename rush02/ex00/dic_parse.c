/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dic_parse.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamather <tamather@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 19:29:35 by tamather          #+#    #+#             */
/*   Updated: 2019/07/21 22:57:38 by tamather         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	del_nb(char **tab)
{
	int i;
	int j;
	int k;

	i = 0;
	while (tab[i])
	{
		j = 0;
		k = 0;
		while (tab[i][j] != ' ')
			j++;
		while (tab[i][j])
		{
			tab[i][k] = tab[i][j];
			j++;
			k++;
		}
		tab[i][k] = '\0';
		i++;
	}
}

char	**dic_parse(char *name)
{
	int		index;
	char	tab[2048];
	char	**tabout;
	int		len;

	if ((index = open(name, O_RDONLY)) == -1)
		return (0);
	len = read(index, tab, 2048);
	tabout = ft_split(tab, "\n");
	del_nb(tabout);
	return (tabout);
}
