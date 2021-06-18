/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_width_precision.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usoares- <usoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 22:58:48 by usoares-          #+#    #+#             */
/*   Updated: 2021/06/18 03:53:08 by usoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_get_width_precision(const char *specs, t_tags *str_tags)
{
    if (*specs < 58 && *specs > 47)
    {
        str_tags->width = ft_getnumber(&specs, str_tags);
    }
    if (*specs == '.')
    {
        str_tags->precision = 0;
        *specs++;
        str_tags->fmt_next++;
        if (*specs < 58 && *specs > 47)
        {
            str_tags->precision = ft_getnumber(&specs, str_tags);
        }
        
    } 
} 