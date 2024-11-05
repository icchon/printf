/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisobe <kaisobe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 22:22:02 by kaisobe           #+#    #+#             */
/*   Updated: 2024/11/05 12:37:32 by kaisobe          ###   ########.fr       */
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

typedef enum e_flg
{
	PADDING_LEFT,
	PADDING_SPACE,
	SIGNED,
	SIGNED_SPACE,
	OCT_HEX_PREFIX,
	NONE,
	UNDEFINED,
}			t_flg;

typedef struct s_options
{
	t_flg	flg;
	int		width;
	int		precision;
}			t_options;

int			ft_printf(char *fmt, ...);

int			ft_print_c_arg_handler(va_list ap, t_options *options);
int			ft_print_d_arg_handler(va_list ap, t_options *options);
int			ft_print_i_arg_handler(va_list ap, t_options *options);
int			ft_print_p_arg_handler(va_list ap, t_options *options);
int			ft_print_s_arg_handler(va_list ap, t_options *options);
int			ft_print_u_arg_handler(va_list ap, t_options *options);
int			ft_print_x_arg_handler(va_list ap, t_options *options);
int			ft_print_lx_arg_handler(va_list ap, t_options *options);
int			ft_print_percent_arg_handler(va_list ap, t_options *options);
int			ft_print_nothing_arg_handler(va_list ap, t_options *options);

int			ft_get_digit_cnt(unsigned int n, unsigned int base);
void		ft_putnbr(int n);
size_t		ft_strlen(const char *s);
void		ft_putshex(unsigned int n);
void		ft_putlhex(unsigned int n);
void		ft_putstr(char *str);
void		ft_putchar(int c);
void		ft_bzero(void *s, size_t n);
char		**ft_split(char const *s, char c);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strchr(const char *s, int c);
int			ft_atoi(const char *nptr);
int			ft_contain(char *str, char c);
int			ft_calc_next_chr(char *str, char c);
void		ft_print_options_for_debug(t_options *options);
t_options	*ft_create_new_options(void);
t_options	*ft_parse_command(char *command);

#endif