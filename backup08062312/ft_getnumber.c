/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getnumber.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usoares- <usoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 03:34:00 by usoares-          #+#    #+#             */
/*   Updated: 2021/06/06 23:30:22 by usoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_getnumber(const  char   **specs, t_tags *str_tags)
{
    int n;

    n = 0;
    str_tags->fmt_next = 0;
    while (**specs < 58 && **specs > 47)
    {
        n = n*10 + (**specs - 48);
        *specs++;
        str_tags->fmt_next++;
    }
    return(n);
}