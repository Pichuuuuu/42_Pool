/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamather <tamather@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 00:18:33 by tamather          #+#    #+#             */
/*   Updated: 2019/07/19 04:39:04 by tamather         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <string.h>
# include <libgen.h>
# include <errno.h>
# include <fcntl.h>
void	ft_putstr_err(char *str);
void    print_file(int ac, char **av);
void    error_msg(char **av, int i);

#endif