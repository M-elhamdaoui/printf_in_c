/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:06:13 by mel-hamd          #+#    #+#             */
/*   Updated: 2023/11/14 16:32:51 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <string.h>

char	get_hex(int i, int cap);
void	ft_putchar_print(char c, int *i);
void	ft_putnbr_printf(long n, int *i, int base, int cap);
void	ft_putstr_printf(char *str, int *i);
void	ft_print_pointer_adress(unsigned long n, int *i, int start);
int		ft_printf(const char *s, ...);

#endif