/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_space_zero.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usoares- <usoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 04:39:45 by usoares-          #+#    #+#             */
/*   Updated: 2021/06/10 04:41:33 by usoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_space_zero(int type, int size, int *p)
{
	char c;

	if (type == 0)
		c = '0';
	else
		c = ' ';
	while (size > 0)
	{
		ft_putchar(c, p);
		size--;
	}
}