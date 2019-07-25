/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamather <tamather@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 04:18:26 by tamather          #+#    #+#             */
/*   Updated: 2019/07/09 04:29:10 by tamather         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_aff(unsigned int nbr, int bs, char *base)
{
	if (nbr >= (unsigned int)bs)
	{
		ft_aff(nbr / bs, bs, base);
		nbr = nbr % bs;
	}
	ft_putchar(base[nbr]);
}

int		ft_check_base(char *base)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] == 127)
			return (0);
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int bs;
	int i;

	i = 0;
	bs = ft_check_base(base);
	if (bs > 1)
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			ft_aff(-nbr, bs, base);
		}
		else
			ft_aff(nbr, bs, base);
	}
}
