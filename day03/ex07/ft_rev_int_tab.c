/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamather <tamather@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 15:27:19 by tamather          #+#    #+#             */
/*   Updated: 2019/07/05 11:41:39 by tamather         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int n;
	int m;

	if ((size % 2) == 1)
	{
		n = (size - 1) / 2;
	}
	else
		n = size / 2;
	while (n > 0)
	{
		m = tab[size - n];
		tab[size - n] = tab[n - 1];
		tab[n - 1] = m;
		n--;
	}
}
