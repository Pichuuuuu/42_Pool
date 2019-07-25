/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamather <tamather@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 01:51:04 by tamather          #+#    #+#             */
/*   Updated: 2019/07/23 23:51:49 by tamather         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 0;
	if (!length)
		return (1);
	while (i < (length - 1) && f(tab[i], tab[i + 1]) <= 0)
		i++;
	if (i == (length - 1))
		return (1);
	i = 0;
	while (i < (length - 1) && f(tab[i], tab[i + 1]) >= 0)
		i++;
	if (i == (length - 1))
		return (1);
	return (0);
}
