/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisobe <kaisobe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 22:22:02 by kaisobe           #+#    #+#             */
/*   Updated: 2024/11/05 08:15:04 by kaisobe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# ifndef ASCII_SIZE
#  define ASCII_SIZE 128
# endif

int		ft_printf(char *fmt, ...);
size_t	ft_strlen(const char *s);
int		ft_print_c(int c);
int		ft_print_c_arg_handler(va_list ap);
int		ft_print_d(int d);
int		ft_print_d_arg_handler(va_list ap);
int		ft_print_i(int d);
int		ft_print_i_arg_handler(va_list ap);
int		ft_print_p(uintptr_t p);
int		ft_print_p_arg_handler(va_list ap);
int		ft_print_s(char *s);
int		ft_print_s_arg_handler(va_list ap);
int		ft_print_u(unsigned int u);
int		ft_print_u_arg_handler(va_list ap);
int		ft_print_x(unsigned int x);
int		ft_print_x_arg_handler(va_list ap);
int		ft_print_lx(unsigned int x);
int		ft_print_lx_arg_handler(va_list ap);
int		ft_print_percent(void);
int		ft_print_percent_arg_handler(va_list ap);
int		ft_print_nothing(void);
int		ft_print_nothing_arg_handler(va_list ap);

int		ft_get_digit_cnt(unsigned int n, unsigned int base);
void	ft_putnbr(int n);
void	ft_putshex(unsigned int n);
void	ft_putlhex(unsigned int n);
void	ft_putstr(char *str);
void	ft_putchar(int c);
void	ft_bzero(void *s, size_t n);

#endif