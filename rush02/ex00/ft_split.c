/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamather <tamather@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 11:40:10 by tamather          #+#    #+#             */
/*   Updated: 2019/07/21 22:58:28 by tamather         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int		is_charset(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int		count_word(char *str, char *charset)
{
	int i;
	int w;

	i = 0;
	w = 0;
	while (str[i])
	{
		if (!(is_charset(str[i], charset)))
		{
			while (str[i] && (!is_charset(str[i], charset)))
				i++;
			w++;
		}
		else
			i++;
	}
	return (w);
}

int		word_len(char *str, char *charset, int p)
{
	int i;
	int w;
	int l;

	i = 0;
	w = 0;
	l = 0;
	while (str[i])
	{
		if (!(is_charset(str[i], charset)))
		{
			while (str[i] && (!is_charset(str[i], charset)))
			{
				i++;
				if (w == p)
					l++;
			}
			w++;
		}
		else
			i++;
	}
	return (l);
}

char	**fghughngob(char *str, char *charset, char **tab)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	while (i < count_word(str, charset))
	{
		if (!(is_charset(str[j], charset)))
		{
			k = 0;
			while (str[j] && (!is_charset(str[j], charset)))
				tab[i][k++] = str[j++];
			tab[i][k] = '\0';
			i++;
		}
		else
			j++;
	}
	tab[i] = 0;
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	char	**tab;

	i = -1;
	if (!(tab = malloc(sizeof(char*) * (count_word(str, charset) + 1))))
		return (0);
	while (++i < count_word(str, charset))
		if (!(tab[i] = malloc(sizeof(char) * (word_len(str, charset, i) + 1))))
			return (0);
	return (fghughngob(str, charset, tab));
}
