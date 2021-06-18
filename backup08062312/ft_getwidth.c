/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getwidth.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usoares- <usoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 22:58:48 by usoares-          #+#    #+#             */
/*   Updated: 2021/06/07 04:11:48 by usoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_getwidth(const char *specs, t_tags *str_tags)
{
    if (*specs < 58 && *specs > 47)
    {
        str_tags->width = ft_getnumber(&specs, str_tags);
    }
}