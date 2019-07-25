/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamather <tamather@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 03:44:01 by tamather          #+#    #+#             */
/*   Updated: 2019/07/23 11:31:24 by tamather         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int		is_digit(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' && str[i] > '9')
			return (1);
		i++;
	}
	return (1);
}

void	do_op(char **av, void (*f)(int, int))
{
	f(ft_atoi(av[1]), ft_atoi(av[3]));
}

int		main(int ac, char *av[])
{
	if (ft_strlen(av[2]))
	{
		if (ac == 4 && is_digit(av[1]) && is_digit(av[3]))
		{
			if (av[2][0] == '+')
				do_op(av, &add);
			else if (av[2][0] == '-')
				do_op(av, &sou);
			else if (av[2][0] == '%')
				do_op(av, &mod);
			else if (av[2][0] == '*')
				do_op(av, &mul);
			else if (av[2][0] == '/')
				do_op(av, &div);
			else
				ft_putchar('0');
			ft_putchar('\n');
		}
	}
	return (0);
}
