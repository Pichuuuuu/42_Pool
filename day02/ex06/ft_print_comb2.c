/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamather <tamather@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 11:22:52 by tamather          #+#    #+#             */
/*   Updated: 2019/07/02 16:27:53 by tamather         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int i;
	int j;

	i = -1;
	while (i++ < 99)
	{
		j = 0;
		while (j < 100)
		{
			if (j > i)
			{
				ft_putchar(i / 10 + 48);
				ft_putchar(i % 10 + 48);
				ft_putchar(' ');
				ft_putchar(j / 10 + 48);
				ft_putchar(j % 10 + 48);
				if (!(j % 10 == 9 && i % 10 == 8 && j / 10 == 9 && i / 10 == 9))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
			j++;
		}
	}
}
