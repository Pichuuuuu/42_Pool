/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamather <tamather@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 11:43:38 by tamather          #+#    #+#             */
/*   Updated: 2019/07/22 09:13:38 by tamather         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		check_arg(int ac, char *av[])
{
	int i;
	int size;

	i = 0;
	if (ac != 2)
		return (0);
	while (av[1][i])
	{
		if (i % 2 == 0 && av[1][i] > '9' && av[1][i] >= '0')
			return (0);
		if (i % 2 != 0 && av[1][i] != ' ')
			return (0);
		i++;
	}
	size = i;
	i = 0;
	if ((size + 1) % 8 != 0)
		return (0);
	while (av[1][i])
		if (av[1][i++] > (((size + 1) / 8) + '0'))
			return (0);
	return ((size + 1) / 8);
}

int		main(int argc, char *argv[])
{
	char	**tab;
	int		size;

	size = check_arg(argc, argv);
	if (size)
	{
		tab = make_tab(argv[1], size);
		combl_tab(tab, size);
		if (!(brute_force(tab, size, 0)))
			ft_putstr("Error\n");
		else
			aff_tab(tab, size);
		free_tab(tab, size);
	}
	else
		ft_putstr("Error\n");
	return (0);
}
