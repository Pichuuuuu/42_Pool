/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamather <tamather@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 13:03:31 by tamather          #+#    #+#             */
/*   Updated: 2019/07/07 01:54:21 by tamather         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
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
