/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamather <tamather@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 19:39:30 by tamather          #+#    #+#             */
/*   Updated: 2019/07/14 21:19:42 by tamather         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

void	aff_tab(char **tab, int size)
{
	int i;
	int j;

	i = 4;
	while (i < size + 4)
	{
		j = 0;
		while (j < size)
		{
			ft_putchar(tab[i][j++]);
			if (j < size)
				ft_putchar(' ');
		}
		ft_putchar('\n');
		i++;
	}
}
