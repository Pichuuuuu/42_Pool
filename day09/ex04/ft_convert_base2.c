/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamather <tamather@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 03:49:36 by tamather          #+#    #+#             */
/*   Updated: 2019/07/24 02:41:29 by tamather         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_atoi_base(char *str, char *base);
void	ft_putnbr_base(int nb, char *base_to, char *dest, int bs);
int		ft_basetoi(int bs, char *base, char *str);
int		ft_check_base(char *base);
int		ft_size(int nb, int bs);

int		check(char *str, char c)
{
	int i;

	i = 0;
	while (str[i])
		if (str[i++] == c)
			return (1);
	return (0);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*dest;
	int		intnb;
	int		size;

	if (ft_check_base(base_from) > 1 && ft_check_base(base_to) > 1)
	{
		intnb = ft_atoi_base(nbr, base_from);
		if (intnb < 0)
			size = ft_size(-intnb, ft_check_base(base_to)) + 1;
		else
			size = ft_size(intnb, ft_check_base(base_to));
		if (!(dest = malloc(sizeof(char) * (size + 1))))
			return (0);
		ft_putnbr_base(intnb, base_to, dest, ft_check_base(base_to));
	}
	else
		return (0);
	return (dest);
}
