/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_flags.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usoares- <usoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 04:15:12 by usoares-          #+#    #+#             */
/*   Updated: 2021/06/15 17:51:10 by usoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_handle_flags(const char *specs, t_tags *str_tags)
{
    while (*specs == '0' || *specs == '-' || *specs == ' ')
	{
		if (*specs == '-')
		{
			str_tags->flag_minus = 1;
			specs++;
            str_tags->fmt_next++;
		}
		else if (*specs == '0')
		{
			str_tags->flag_zero = 1;
			specs++;
            str_tags->fmt_next++;
		}
		else if (*specs == ' ')
		{
			specs++;
            str_tags->fmt_next++;
		}
		
    }
}