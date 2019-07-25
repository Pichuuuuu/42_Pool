/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamather <tamather@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 09:44:13 by tamather          #+#    #+#             */
/*   Updated: 2019/07/16 18:09:36 by tamather         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

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

void	ft_putnbr(int nb)
{
	if (nb >= -2147483648 && nb <= 2147483647)
	{
		if (nb != -2147483648)
		{
			if (nb < 0)
			{
				nb = nb * -1;
				ft_putchar('-');
			}
			if (nb > 9)
			{
				ft_putnbr(nb / 10);
				ft_putchar(nb % 10 + 48);
			}
			if (nb < 10)
				ft_putchar(nb + 48);
		}
		else
			write(1, "-2147483648", 11);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr((par[i]).str);
		ft_putchar('\n');
		ft_putnbr((par[i]).size);
		ft_putchar('\n');
		ft_putstr((par[i]).copy);
		ft_putchar('\n');
		i++;
	}
}
