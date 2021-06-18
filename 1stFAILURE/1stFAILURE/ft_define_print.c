/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_define_print.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usoares- <usoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 04:45:30 by usoares-          #+#    #+#             */
/*   Updated: 2021/05/02 16:27:14 by usoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_define_print(char specif, t_tags *f)
{
	if (specif == 'd' || specif == 'i')
		ft_printint(1, f);
	else if (specif == 'u')
		ft_printint(0, f);
	else if (specif == 'c')
		ft_printchar(f);
	else if (specif == 's')
		ft_printstr(f);
	else if (specif == 'x')
		ft_printhex(0, f);
	else if (specif == 'X')
		ft_printhex(1, f);
	else if (specif == 'p')
		ft_printpointer(f);
	else if (specif == '%')
		ft_printpercent(f);
}