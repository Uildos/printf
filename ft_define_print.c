/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_define_print.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usoares- <usoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 04:45:30 by usoares-          #+#    #+#             */
/*   Updated: 2021/06/16 03:51:52 by usoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_define_print(char specif, t_tags *f)
{
	if (specif == 'c' )
		ft_printchar(f);
	else if (specif == 's')
		ft_printstr(f);
	else if (specif == 'i')
	{
		ft_printint(f);
	}
}
