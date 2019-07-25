/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamather <tamather@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 19:28:55 by tamather          #+#    #+#             */
/*   Updated: 2019/07/07 21:15:52 by tamather         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line(char f, char s, int size)
{
	int p;

	size = size - 1;
	p = 0;
	while (p <= size)
	{
		if (p == 0 || p == size)
			ft_putchar(f);
		if (p < size && p > 0)
			ft_putchar(s);
		p++;
	}
	ft_putchar('\n');
}

void	rush(int a, int b)
{
	int i;

	b = b - 1;
	i = -1;
	if (b == 0 && !(a == 0))
		print_line('o', '-', a);
	else if (b == 1 && !(a == 0))
	{
		print_line('o', '-', a);
		print_line('o', '-', a);
	}
	else if (!(a == 0 || b == -1))
	{
		while (i++ <= b)
		{
			if (i == 0)
				print_line('o', '-', a);
			if (i > 0 && i < b)
				print_line('|', ' ', a);
			if (i == b)
				print_line('o', '-', a);
		}
	}
}
