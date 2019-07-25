/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamather <tamather@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 03:25:20 by tamather          #+#    #+#             */
/*   Updated: 2019/07/10 09:26:08 by tamather         ###   ########.fr       */
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

	c = argc - 1;
	while (c > 0)
	{
		i = 0;
		while (argv[c][i])
		{
			ft_putchar(argv[c][i]);
			i++;
		}
		ft_putchar('\n');
		c--;
	}
	return (0);
}
