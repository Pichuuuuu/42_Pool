/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamather <tamather@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 02:52:43 by tamather          #+#    #+#             */
/*   Updated: 2019/07/25 15:42:47 by tamather         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void    print_file(int i, char **av)
{
	int index;
	int len;
	int totlen;
	char buff[256];
	char *tab;

	totlen = 0;
	if((index = open(av[i], O_RDONLY)) == -1)
		error_msg(av, i);
	else
	{
		while((len = read(index, tab, 256)) > 0)
		{
			totlen += len;
			if(!(tab = malloc(sizeof(char) * totlen)))
				break;
		}
		if (len < 0)
			error_msg((av), i);
		totlen -= ft_atoi(av[2]);
		len = 0;
		ft_putstr((tab+totlen));
	}
}

int		is_a_digit(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if(str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}


int main(int ac, char *av[])
{
	int		len;
	char	tab[2048];
	int i;

	i = 4;
	if (ac == 3 && is_a_digit(av[2]))
	{
		while ((len = read(STDIN_FILENO, tab, 2048)) > 0);
		if (len == -1)
			error_msg(av, -1);
	}
	else if (ac == 4 && is_a_digit(av[2]))
		print_file(3, av);
	else if (ac > 4 && is_a_digit(av[2]))
	{
		i = 3;
		while(ac > i)
		{
			if(open(av[i], O_RDONLY) != -1)
			{
				if(i != 3)
					ft_putstr("\n");
				ft_putstr("==> ");
				ft_putstr(basename(av[i]));
				ft_putstr(" <==\n");
				print_file(i++, av);
			}
			else
				error_msg(av, i++);
		}
	}
	return 0;
}
