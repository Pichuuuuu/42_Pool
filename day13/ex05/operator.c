/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamather <tamather@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 04:05:29 by tamather          #+#    #+#             */
/*   Updated: 2019/07/22 09:14:48 by tamather         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void	mul(int a, int b)
{
	int res;

	res = a * b;
	ft_putnbr(res);
}

void	div(int a, int b)
{
	int res;

	res = 0;
	if (b == 0)
		ft_putstr("Stop : division by zero");
	else
	{
		res = a / b;
		ft_putnbr(res);
	}
}

void	mod(int a, int b)
{
	int res;

	res = 0;
	if (b == 0)
		ft_putstr("Stop : modulo by zero");
	else
	{
		res = a % b;
		ft_putnbr(res);
	}
}

void	add(int a, int b)
{
	int res;

	res = a + b;
	ft_putnbr(res);
}

void	sou(int a, int b)
{
	int res;

	res = a - b;
	ft_putnbr(res);
}
