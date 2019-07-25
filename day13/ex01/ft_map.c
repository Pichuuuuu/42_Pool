/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamather <tamather@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 01:21:41 by tamather          #+#    #+#             */
/*   Updated: 2019/07/22 09:14:11 by tamather         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *tabout;

	if (!(tabout = malloc(sizeof(int) * (length))))
		return (0);
	i = 0;
	while (i < length)
	{
		tabout[i] = f(tab[i]);
		i++;
	}
	return (tabout);
}
