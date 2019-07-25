/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamather <tamather@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 23:48:15 by tamather          #+#    #+#             */
/*   Updated: 2019/07/07 04:32:14 by tamather         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int n;

	n = 0;
	i = (unsigned int)ft_strlen(dest);
	while (*src && n < nb)
	{
		dest[i] = *src;
		src++;
		i++;
		n++;
	}
	dest[i] = '\0';
	return (dest);
}
