/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usoares- <usoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 12:02:04 by usoares-          #+#    #+#             */
/*   Updated: 2021/06/06 23:40:09 by usoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

typedef struct	s_tags{
	va_list		ap;
	int			printed;
	int			fmt_next;
	int			flag_zero;
	int			flag_minus;
	int			width;
	int			point;
	int			precision;
	char		specifier;
}				t_tags;

void		ft_putchar(char c, int *p);
void    	ft_printchar(t_tags *str_tags);
void 		ft_getwidth(const char *specs, t_tags *str_tags);
int		ft_printf(const char *fmt, ...);
void 		ft_getwidth(const char *specs, t_tags *str_tags);
int 		ft_getnumber(const char **specs, t_tags *str_tags);
void		ft_specs_init(t_tags *f);
void   		ft_define_print(char specif, t_tags *f);

#endif

