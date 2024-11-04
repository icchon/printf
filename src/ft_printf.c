/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisobe <kaisobe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 06:40:20 by kaisobe           #+#    #+#             */
/*   Updated: 2024/11/05 08:25:43 by kaisobe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static void	init_function_arr(int (*p[])(va_list ap))
{
	int	i;

	i = 0;
	while (i < ASCII_SIZE)
		p[i++] = ft_print_nothing_arg_handler;
	p['c'] = ft_print_c_arg_handler;
	p['s'] = ft_print_s_arg_handler;
	p['p'] = ft_print_p_arg_handler;
	p['d'] = ft_print_d_arg_handler;
	p['i'] = ft_print_i_arg_handler;
	p['u'] = ft_print_u_arg_handler;
	p['x'] = ft_print_x_arg_handler;
	p['X'] = ft_print_lx_arg_handler;
	p['%'] = ft_print_percent_arg_handler;
	return ;
}
// cspdiuxX%

int	ft_printf(char *fmt, ...)
{
	va_list	ap;
	int		i;
	int		printed_len;
	int		(*p[ASCII_SIZE])(va_list x);

	init_function_arr(p);
	va_start(ap, fmt);
	printed_len = 0;
	i = 0;
	while (fmt[i])
	{
		if (fmt[i] == '%')
		{
			i++;
			printed_len += p[(unsigned int)fmt[i++]](ap);
		}
		else
		{
			printed_len += write(1, &fmt[i++], 1);
		}
	}
	va_end(ap);
	return (printed_len);
}
