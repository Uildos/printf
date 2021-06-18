/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_define_print.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usoares- <usoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 04:45:30 by usoares-          #+#    #+#             */
/*   Updated: 2021/06/07 22:24:17 by usoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_define_print(char specif, t_tags *f)
{
	/* printf("Passei no DEFINE_PRINT"); */
	if (specif == 'c' || specif == 'i')
		ft_printchar(f);
}
