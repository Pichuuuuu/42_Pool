/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamather <tamather@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 19:25:41 by tamather          #+#    #+#             */
/*   Updated: 2019/07/21 22:42:02 by tamather         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

void	ft_putstr(char *str);
void	ft_afficher_triple(unsigned long int nb, char **digits);
void	ft_convert_to_words(unsigned long int nb, char **digits);
int		is_charset(char c, char *charset);
int		count_word(char *str, char *charset);
int		word_len(char *str, char *charset, int p);
char	**fghughngob(char *str, char *charset, char **tab);
char	**ft_split(char *str, char *charset);
void	del_nb(char **tab);
char	**dic_parse(char *name);

#endif
