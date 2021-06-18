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

int printxt (const char **c)
{
	ft_putchar(**c);
	(*c)++;
	return(0);
}

int	printarg(void)
{
	return(0);
}

int ft_printf(const char *strfmt, ...)
{
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
                			printxt(&strfmt);
				else
				{
					strfmt++;
					if(*strfmt == '%')
						printxt(&strfmt);
					else	if(printarg() == -1)
							return(-1);
				}
        		}
   		 }
	return(1);
}
