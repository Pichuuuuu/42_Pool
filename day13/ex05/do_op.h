/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamather <tamather@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 06:12:01 by tamather          #+#    #+#             */
/*   Updated: 2019/07/23 11:32:13 by tamather         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

int		is_digit(char *str);
void	do_op(char **av, void (*f)(int, int));
int		ft_atoi(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
void	mul(int a, int b);
void	div(int a, int b);
void	mod(int a, int b);
void	add(int a, int b);
void	sou(int a, int b);
int		ft_strlen(char *str);

#endif
