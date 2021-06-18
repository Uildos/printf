/* **************************************************************************** */
/*                                                                              */
/*                                                         :::      ::::::::    */
/*    Untitled-1                                         :+:      :+:    :+:    */
/*                                                     +:+ +:+         +:+      */
/*    By: usoares- <usoares-@student.42sp.org.br>    +#+  +:+       +#+         */
/*                                                 +#+#+#+#+#+   +#+            */
/*    Created: 2021/04/16 16:23:07 by usoares-          #+#    #+#              */
/*    Updated: 2021/04/16 16:23:07 by usoares-         ###   ########.fr        */
/*                                                                              */
/* **************************************************************************** */

#include "ft_printf.h"

int printxt(const char **c)
{  
	ft_putchar(**c);
	(*c)++;
	return(1);
}

int	ft_stgspecifier(const char *specs, t_tags *str_tags)
{
	if (*specs != 's' && *specs != 'c' && *specs != 'i'\
			&& *specs != 'u' && *specs != 'd' && *specs != 'x'\
			&& *specs != 'X' && *specs != 'p' && *specs != '%')
		return (-1);
	else
	{
		str_tags->specifier = *specs;
		return (0);
	}
}

static	int	ft_stgspecs(const char **specs, t_tags *str_tags)
{
	ft_specs_init(str_tags);
	while (**specs == '0' || **specs == '-')
	{
		if (**specs == '-')
		{
			str_tags->flag_minus = 1;
			*specs++;
		}
		if (**specs == '0')
		{
			str_tags->flag_zero = 1;
			*specs++;
		}
	}
	ft_stgspecifier(*specs, str_tags);
	ft_define_print(str_tags->specifier, str_tags); 
}

int ft_printf(const char *strfmt, ...)
{
	t_tags	*str_tags;

	if(!strfmt)
		return(-1);
	while(*strfmt)
		{
			if(*strfmt != '%')
				printxt(&strfmt);
			else
        		{
            			strfmt++;
            			if(*strfmt == '%')
						{
							printxt(&strfmt);
						}
                		else if(ft_stgspecs(&strfmt, str_tags) == -1)
                    		return(-1);
        		}
    	}
	printf("A flag_menos está com valor %-i \n", str_tags->flag_minus);
	return(1);
}
