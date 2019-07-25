/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_msg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamather <tamather@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 01:09:54 by tamather          #+#    #+#             */
/*   Updated: 2019/07/19 04:37:55 by tamather         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	error_msg(char **av, int i)
{
	ft_putstr_err(basename(av[0]));
	ft_putstr_err(": ");
	if (i != -1)
		ft_putstr_err(av[i]);
	ft_putstr_err(": ");
	ft_putstr_err(strerror(errno));
	ft_putstr_err("\n");
}