/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamather <tamather@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 20:13:30 by tamather          #+#    #+#             */
/*   Updated: 2019/07/19 02:34:58 by tamather         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int ac, char *av[])
{
	char input;
	int len;
	
	if(ac > 1)
		print_file(ac, av);
	else
	{
		while ((len = read(STDIN_FILENO, &input, 1)) > 0)
			write(STDOUT_FILENO, &input, 1);
		if(len == -1)
			error_msg(av, -1);
	}
	return (0);
}
