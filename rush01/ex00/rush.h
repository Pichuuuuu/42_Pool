/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamather <tamather@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 19:51:29 by tamather          #+#    #+#             */
/*   Updated: 2019/07/22 09:13:36 by tamather         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H
# include <unistd.h>
# include <stdlib.h>

void	ft_putchar(char c);
void	aff_tab(char **tab, int size);
int		check_col(char **tab, char t, int x, int size);
int		check_line(char **tab, char t, int y, int size);
int		check_col_ud_pile(char **tab, int y, int size);
int		check_col_du_pile(char **tab, int x, int size);
int		check_line_lr_pile(char **tab, int x, int y, int size);
int		check_line_rl_pile(char **tab, int x, int y, int size);
int		brute_force(char **tab, int size, int p);
int		check_arg(int ac, char *av[]);
char	**make_tab(char *str, int size);
void	combl_tab(char **tab, int size);
int		is_good(char **tab, int size, int p);
void	ft_putstr(char *str);
void	free_tab(char **tab, int size);

#endif
