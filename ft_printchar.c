/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usoares- <usoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/09 11:00:03 by ebresser          #+#    #+#             */
/*   Updated: 2021/06/12 04:47:26 by usoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printchar(t_tags *str_tags)
{
	char	c;

	/* printf("Passeeeiii aqui"); */
	c = (char)va_arg(str_tags->ap, int);
	if (str_tags->flag_minus)
	{
		ft_putchar(c, &(str_tags->printed));
		ft_print_space_zero(1,(str_tags->width - 1),&(str_tags->printed));
	}
	else
	{
		ft_print_space_zero(1,(str_tags->width - 1),&(str_tags->printed));
		ft_putchar(c, &(str_tags->printed));
	}
}
