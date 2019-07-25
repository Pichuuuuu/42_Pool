/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamather <tamather@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 04:16:23 by tamather          #+#    #+#             */
/*   Updated: 2019/07/23 08:02:38 by tamather         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
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

char	*ft_strcat(char *dest, char *src)
{
	int i;

	i = ft_strlen(dest);
	while (*src)
	{
		dest[i] = *src;
		src++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*re;
	int		i;
	int		len;

	i = -1;
	len = 0;
	while (++i < size)
		len += ft_strlen(strs[i]);
	len = (ft_strlen(sep) * (size - 1)) + len;
	if (!(re = malloc(sizeof(char) * ((size <= 0) ? 1 : len + 1))))
		return (0);
	re[0] = '\0';
	i = -1;
	while (++i < size)
	{
		ft_strcat(re, strs[i]);
		if (i < size - 1)
			ft_strcat(re, sep);
	}
	return (re);
}
