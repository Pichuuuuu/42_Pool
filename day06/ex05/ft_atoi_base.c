/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamather <tamather@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 08:46:27 by tamather          #+#    #+#             */
/*   Updated: 2019/07/24 02:41:37 by tamather         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check(char *str, char c)
{
	int i;

	i = 0;
	while (str[i])
		if (str[i++] == c)
			return (1);
	return (0);
}

int		ft_check_base(char *base)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] == 127)
			return (0);
		i++;
	}
	return (i);
}

int		ft_basetoi(int bs, char *base, char *str)
{
	int p;
	int in;
	int i;

	in = 0;
	i = 0;
	while (str[i])
	{
		if (!(check(base, str[i])))
			return (in / bs);
		p = 0;
		while (str[i] != base[p])
			p++;
		i++;
		if (str[i])
			in = (p + in) * bs;
		else
			in = p + in;
	}
	return (in);
}

int		ft_atoi_base(char *str, char *base)
{
	int s;
	int bs;
	int r;

	bs = ft_check_base(base);
	r = 0;
	s = 0;
	while (*str == ' ' || *str == '\t' || *str == '\v'
		|| *str == '\f' || *str == '\r' || *str == '\n')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			s++;
		str++;
	}
	if (bs > 1)
	{
		r = ft_basetoi(bs, base, str);
		s = s % 2;
	}
	if (s)
		r = -1 * r;
	return (r);
}
