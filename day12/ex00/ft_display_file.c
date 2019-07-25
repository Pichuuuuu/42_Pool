/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamather <tamather@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 05:31:21 by tamather          #+#    #+#             */
/*   Updated: 2019/07/19 01:32:05 by tamather         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int		main(int ac, char const *av[])
{
	int		bite;
	int		len;
	char	tab[2048];

	if (ac < 2)
		write(2, "File name missing.\n", 19);
	else if (ac > 2)
		write(2, "Too many arguments.\n", 21);
	else
	{
		if ((bite = open(av[1], O_RDONLY)) == -1)
			write(2, "Cannot read file.\n", 18);
		else
		{
			while ((len = read(bite, tab, 2048)) > 0)
				write(1, tab, len);
			if (len == -1)
				write(2, "Cannot read file.\n", 18);
		}
		close(bite);
	}
	return (0);
}
