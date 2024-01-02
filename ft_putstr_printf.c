/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_printf.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hamd <mel-hamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:55:29 by mel-hamd          #+#    #+#             */
/*   Updated: 2023/11/14 17:32:14 by mel-hamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_printf(char *str, int *i)
{
	int	l;

	l = 0;
	if (!str)
	{
		ft_putstr_printf("(null)", i);
		return ;
	}
	while (*(str + l))
	{
		ft_putchar_print(*(str + l), i);
		l++;
	}
}
