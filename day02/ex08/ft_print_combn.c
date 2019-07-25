/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamather <tamather@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 06:59:21 by tamather          #+#    #+#             */
/*   Updated: 2019/07/19 00:24:17 by tamather         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_print_combn(int n)
{
	int tab[15];
	int i;

	while(i < n)
		tab[i++] = i;
	while ()
	{
		
	}
	

}

int main(int argc, char const *argv[])
{
	ft_print_combn(5);
	return 0;
}
