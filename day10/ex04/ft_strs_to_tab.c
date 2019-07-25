/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamather <tamather@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 03:11:49 by tamather          #+#    #+#             */
/*   Updated: 2019/07/16 21:38:43 by tamather         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int					ft_strlen(char *str)
{
	int n;

	n = 0;
	while (*str != '\0')
	{
		n++;
		str++;
	}
	return (n);
}

char				*ft_strcpy(char *dest, char *src)
{
	int n;

	n = 0;
	while (src[n])
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = '\0';
	return (dest);
}

char				*ft_strdup(char *src)
{
	char *cpy;

	if (!(cpy = malloc(sizeof(char) * (ft_strlen(src) + 1))))
		return (0);
	return (ft_strcpy(cpy, src));
}

t_stock_str			create_stock(t_stock_str stock, char *av)
{
	stock.size = ft_strlen(av);
	stock.str = av;
	stock.copy = ft_strdup(av);
	return (stock);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int				i;
	t_stock_str		*stock;

	if (!(stock = malloc(sizeof(t_stock_str) * (ac + 1))))
		return (0);
	i = 0;
	while (i < ac)
	{
		stock[i] = create_stock(stock[i], av[i]);
		i++;
	}
	(stock[i]).str = 0;
	return (stock);
}
