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
	ft_handle_flags(*specs, str_tags);
	(*specs) += str_tags->fmt_next;
	str_tags->fmt_next = 0;
	ft_get_width_precision(*specs, str_tags);
	(*specs) += str_tags->fmt_next;
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
		
	
	if(!strfmt || !(str_tags = (t_tags*)malloc(sizeof(t_tags))))
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
							if (increment == -1)
								return(-1);
						}
        		}
		}
	va_end(str_tags->ap);
	free(str_tags);
	return(1);
}
