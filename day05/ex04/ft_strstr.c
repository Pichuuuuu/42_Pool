/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamather <tamather@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 00:27:34 by tamather          #+#    #+#             */
/*   Updated: 2019/07/07 02:02:10 by tamather         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int b;

	i = 0;
	if (!to_find[0])
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			b = 1;
			while (to_find[b] && str[b + i] == to_find[b])
			{
				b++;
			}
			if (!(to_find[b]))
				return (str + i);
		}
		i++;
	}
	return (0);
}
