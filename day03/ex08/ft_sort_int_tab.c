/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamather <tamather@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 17:04:07 by tamather          #+#    #+#             */
/*   Updated: 2019/07/10 05:17:24 by tamather         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int n;
	int t;
	int c;

	n = 0;
	while (n < (size - 1))
	{
		c = 0;
		while (c < (size - 1))
		{
			if (tab[c] > tab[c + 1])
			{
				t = tab[c];
				tab[c] = tab[c + 1];
				tab[c + 1] = t;
			}
			c++;
		}
		n++;
	}
}
