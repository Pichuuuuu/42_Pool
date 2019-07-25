/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamather <tamather@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 05:12:22 by tamather          #+#    #+#             */
/*   Updated: 2019/07/10 09:23:26 by tamather         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_sort_shit_str_tab(char *str[], int size)
{
	int		n;
	char	*tmp;
	int		i;

	n = 0;
	while (n < (size - 1))
	{
		i = 0;
		while (i < (size - 1))
		{
			if (ft_strcmp(str[i], str[i + 1]) > 0)
			{
				tmp = str[i];
				str[i] = str[i + 1];
				str[i + 1] = tmp;
			}
			i++;
		}
		n++;
	}
}

int		main(int argc, char *argv[])
{
	int i;
	int c;

	c = 1;
	ft_sort_shit_str_tab(argv + 1, argc - 1);
	while (c < argc)
	{
		i = 0;
		while (argv[c][i])
		{
			ft_putchar(argv[c][i]);
			i++;
		}
		ft_putchar('\n');
		c++;
	}
	return (0);
}
