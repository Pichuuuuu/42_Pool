/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamather <tamather@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 03:10:16 by tamather          #+#    #+#             */
/*   Updated: 2019/07/10 09:29:24 by tamather         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char *argv[])
{
	int i;
	int c;

	c = 1;
	while (c < argc)
	{
		i = 0;
		while (argv[c][i])
		{
			ft_putchar(argv[c][i]);
			i++;
		}
		ft_putchar('\n');
		c++;
	}
	return (0);
}
