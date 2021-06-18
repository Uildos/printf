/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usoares- <usoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 00:15:37 by usoares-          #+#    #+#             */
/*   Updated: 2021/06/16 05:11:04 by usoares-         ###   ########.fr       */
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

void    ft_printint(t_tags *str_tags)
{
    char    *s;
    int     len;
    
    s = va_arg(str_tags->ap, char *);
    len = str_len(s);
    if (str_tags->precision > -1)
    {
        if (str_tags->width)
        {
            if (str_tags->flag_minus)
            {
                ft_print_space_zero(0,(str_tags->precision - len),&(str_tags->printed));
                ft_putstr(s, &(str_tags->printed), len);
                ft_print_space_zero(1,(str_tags->width - str_tags->precision),&(str_tags->printed));
            }
            else
            {
                ft_print_space_zero(1,(str_tags->width - str_tags->precision),&(str_tags->printed));
                ft_print_space_zero(0,(str_tags->precision - len),&(str_tags->printed));
                ft_putstr(s, &(str_tags->printed), len);
            }
        }
        else
        {
            ft_putstr(s, &(str_tags->printed), len);
        }
    }
    else
    {
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
}
