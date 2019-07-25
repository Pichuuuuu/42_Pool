/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamather <tamather@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 11:02:32 by bsworn            #+#    #+#             */
/*   Updated: 2019/07/21 23:10:13 by tamather         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

long long int	ft_atoi(char *str)
{
	long long int	res;
	int				i;

	i = 0;
	res = 0;
	if (str[i] < '0' || str[i] > '9')
		return (-1);
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res);
}

int				ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int				ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] > 47 && str[i] < 58))
			return (0);
		i++;
	}
	return (1);
}

int				dict_nb(char **argv)
{
	long long	nbr;
	char		**tab;

	if (!(ft_str_is_numeric(argv[2])))
		ft_putstr("Error\n");
	else
	{
		nbr = ft_atoi(argv[2]);
		if (nbr > 999999999999 || nbr < 0)
		{
			ft_putstr("Error\n");
			return (0);
		}
		if (!(tab = dic_parse(argv[1])))
			ft_putstr("Dict Error\n");
		else
			ft_convert_to_words(ft_atoi(argv[2]), tab);
	}
	return (0);
}

int				main(int argc, char **argv)
{
	long long	nbr;
	char		**tab;

	if (argc < 2 || argc > 3)
		ft_putstr("Error\n");
	if (argc == 2)
	{
		nbr = ft_atoi(argv[1]);
		if (nbr > 999999999999 || nbr < 0)
		{
			ft_putstr("Error\n");
			return (0);
		}
		if (!(ft_str_is_numeric(argv[1])))
			ft_putstr("Error\n");
		else
		{
			if (!(tab = dic_parse("dict")))
				ft_putstr("Dict Error\n");
			else
				ft_convert_to_words(ft_atoi(argv[1]), tab);
		}
	}
	if (argc == 3)
		dict_nb(argv);
}
