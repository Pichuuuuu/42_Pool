/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   affichage2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamather <tamather@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 22:58:55 by tamather          #+#    #+#             */
/*   Updated: 2019/07/21 23:07:10 by tamather         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void				ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

void				ft_afficher_triple(unsigned long int nb, char **digits)
{
	if (nb > 99)
	{
		ft_putstr(digits[nb / 100]);
		write(1, " ", 1);
		ft_putstr(digits[28]);
		write(1, " ", 1);
		nb = nb - (nb / 100 * 100);
	}
	if (nb > 19 && nb != 0)
	{
		ft_putstr(digits[(nb / 10) + 18]);
		write(1, " ", 1);
		ft_putstr(digits[nb % 10]);
		write(1, " ", 1);
	}
	else if (nb != 0)
	{
		ft_putstr(digits[nb]);
		write(1, " ", 1);
	}
}

unsigned long int	last(char **digits, unsigned long int nb)
{
	ft_afficher_triple(nb / 1000, digits);
	ft_putstr(digits[29]);
	write(1, " ", 1);
	nb = nb - (nb / 1000) * 1000;
	return (nb);
}

void				ft_convert_to_words(unsigned long int nb, char **digits)
{
	if (nb == 0)
		ft_putstr(digits[0]);
	else
	{
		if (nb / 1000000000 != 0)
		{
			ft_afficher_triple(nb / 1000000000, digits);
			ft_putstr(digits[31]);
			write(1, " ", 1);
			nb = nb - (nb / 1000000000) * 1000000000;
		}
		if (nb / 1000000 != 0)
		{
			ft_afficher_triple(nb / 1000000, digits);
			ft_putstr(digits[30]);
			write(1, " ", 1);
			nb = nb - (nb / 1000000) * 1000000;
		}
		if (nb / 1000 != 0)
			nb = last(digits, nb);
		ft_afficher_triple(nb, digits);
	}
	write(1, "\n", 1);
}
