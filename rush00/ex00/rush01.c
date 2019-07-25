/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamather <tamather@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 19:34:54 by tamather          #+#    #+#             */
/*   Updated: 2019/07/07 21:16:15 by tamather         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line(char f, char s, char z, int size)
{
	int p;

	size = size - 1;
	p = 0;
	while (p <= size)
	{
		if (p == 0)
			ft_putchar(f);
		if (p < size && p > 0 && size != 0)
			ft_putchar(s);
		if (p == size && size != 0)
			ft_putchar(z);
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
		print_line('/', '*', '\\', a);
	else if (b == 1 && !(a == 0))
	{
		print_line('/', '*', '\\', a);
		print_line('\\', '*', '/', a);
	}
	else if (!(a == 0 || b == -1))
	{
		while (i++ <= b)
		{
			if (i == 0)
				print_line('/', '*', '\\', a);
			if (i > 0 && i < b)
				print_line('*', ' ', '*', a);
			if (i == b)
				print_line('\\', '*', '/', a);
		}
	}
}
