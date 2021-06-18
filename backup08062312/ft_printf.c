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

int printxt(const char **c, int *printed)
{  
	ft_putchar(**c, printed);
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
		str_tags->fmt_next++;
		return (1);
	}
}

static	int	ft_stgspecs(const char **specs, t_tags *str_tags)
{
	int fmt_next;
	
	fmt_next = 0;
	ft_specs_init(str_tags);
	while (**specs == '0' || **specs == '-')
	{
		if (**specs == '-')
		{
			str_tags->flag_minus = 1;
			printf("Esta lendo a posição: %c .", **specs);
			(*specs)++;
			printf("Esta lendo a posição: %c .", **specs);
			// fmt_next++;
		}
		if (**specs == '0')
		{
			str_tags->flag_zero = 1;
			(*specs)++;
			// fmt_next++;
		}
	}
	str_tags->fmt_next = 0;
	ft_getwidth(*specs, str_tags);
	(*specs) += str_tags->fmt_next;
	// fmt_next += str_tags->fmt_next;
	str_tags->fmt_next = 0;
	ft_stgspecifier(*specs, str_tags);
	fmt_next += str_tags->fmt_next;
	ft_define_print(str_tags->specifier, str_tags);
	(*specs)++;
	return(fmt_next);  
 }

int ft_printf(const char *strfmt, ...)
{
	t_tags	*str_tags;
	int	increment;
		
	if(!strfmt)
		return(-1);
	str_tags->printed = 0;
	va_start(str_tags->ap, strfmt);
	while(*strfmt)
		{
			increment = 0;
			if(*strfmt != '%')
				printxt(&strfmt, &(str_tags->printed));
			else
        		{
            			strfmt++;
            			if(*strfmt == '%')
						{
							printxt(&strfmt, &(str_tags->printed));
						}
                		else 
						{	
							increment = ft_stgspecs(&strfmt, str_tags);
							// printf("Incremento = %i \n", increment);
							if (increment == -1)
								return(-1);
						}
        		}
			// printf("strfmt é: %c \n",*strfmt);
		}
	return(1);
}
