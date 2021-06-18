/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specs_init.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usoares- <usoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 03:06:28 by usoares-          #+#    #+#             */
/*   Updated: 2021/06/15 16:17:19 by usoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_specs_init(t_tags *f)
{
	f->flag_minus = 0;
	f->flag_zero = 0;
	f->fmt_next = 0;
	f->width = 0;
	f->point = 0;
	f->precision = -1;
	f->specifier = '\0';
}