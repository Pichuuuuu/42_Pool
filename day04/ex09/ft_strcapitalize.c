/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamather <tamather@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 22:42:26 by tamather          #+#    #+#             */
/*   Updated: 2019/07/06 22:11:26 by tamather         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		is_uppercase(char str)
{
	return (str >= 'A' && str <= 'Z');
}

int		is_low(char str)
{
	return (str >= 'a' && str <= 'z');
}

int		is_alpha(char str)
{
	return ((str <= 'Z' && str >= 'A') || (str <= 'z' && str >= 'a'));
}

int		is_digit(char str)
{
	return (str >= '0' && str <= '9');
}

char	*ft_strcapitalize(char *str)
{
	int a;

	a = 0;
	while (str[a])
	{
		if (a == 0 && (is_alpha(str[a]) || is_digit(str[a])))
		{
			if (is_low(str[a]))
				str[a] = str[a] - 32;
			a++;
		}
		if ((!is_alpha(str[a - 1])) && (!is_digit(str[a - 1]))
			&& is_low(str[a]))
			str[a] = str[a] - 32;
		if (is_alpha(str[a - 1]) || (is_digit(str[a - 1])
			&& is_alpha(str[a])))
		{
			if (is_uppercase(str[a]))
				str[a] = str[a] + 32;
		}
		a++;
	}
	return (str);
}
