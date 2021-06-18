/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usoares- <usoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 12:02:04 by usoares-          #+#    #+#             */
/*   Updated: 2021/05/02 16:26:41 by usoares-         ###   ########.fr       */
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
	int			fmt_inc;
	int			flag_zero;
	int			flag_minus;
	int			width;
	int			point;
	int			precision;
	char			specifier;
}				t_tags;

void			ft_putchar(char c);
void                    ft_printint(int signal, t_tags *f);
void                    ft_printspacezero(int type, int qtt, int *p);
void                    ft_putnbr(int n, int *p);
void                    ft_putnbr_u(unsigned int n, int *p);
void                    ft_putstr(char *s, int *p, int qtt);
int                     ft_len_u(unsigned int u);
int                     ft_len_int(int a);
int                     ft_len_add(size_t add);
void                    ft_putnbr_hex(size_t h, int capitalized, int *p);
void                    ft_printchar(t_tags *f);
void                    ft_printpointer(t_tags *f);
void                    ft_printhex(int capitalized, t_tags *f);
void                    ft_printpercent(t_tags *f);
void                    ft_printstr(t_tags *f);
int			ft_printf(const char *fmt, ...);
void			ft_specs_init(t_tags *f);
void   			ft_define_print(char specif, t_tags *f);

#endif

