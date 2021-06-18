/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usoares- <usoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 04:59:26 by usoares-          #+#    #+#             */
/*   Updated: 2021/06/16 04:04:43 by usoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static  int str_len(const char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

void    ft_printstr(t_tags *str_tags)
{
    char    *s;
    int     len;

    s = va_arg(str_tags->ap, char *);
	len = str_len(s);
	if ((str_tags->precision > -1) && (str_tags->precision < len))
    {
        len = str_tags->precision;
    }
    if (str_tags->flag_minus)
	{
		ft_putstr(s, &(str_tags->printed), len);
		ft_print_space_zero(1,(str_tags->width - len),&(str_tags->printed));
	}
    else
	{
		ft_print_space_zero(1,(str_tags->width - len),&(str_tags->printed));
		ft_putstr(s, &(str_tags->printed), len);
	}

    
}