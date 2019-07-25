/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamather <tamather@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 01:08:33 by tamather          #+#    #+#             */
/*   Updated: 2019/07/19 06:48:00 by tamather         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	print_file(int ac, char **av)
{
	int i;
	int index;
	int len;
	char tab[2048];

	i = 1;
	while (i < ac)
	{
		if ((index = open(av[i], O_RDONLY)) == -1)
			error_msg(av, i);
		else
		{
			while ((len = read(index, tab, 2048)) > 0)
				write(STDOUT_FILENO, tab, len);
			if (len == -1)
				error_msg(av, -1);
		}
		i++;
		close (index);
	}
}
