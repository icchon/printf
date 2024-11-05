/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisobe <kaisobe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 06:40:20 by kaisobe           #+#    #+#             */
/*   Updated: 2024/11/05 12:58:56 by kaisobe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	init_f_arr(int (*p[])(va_list x, t_options *o))
{
	static int	is_initialized = 0;
	int			i;

	if (is_initialized)
		return ;
	i = 0;
	while (i < ASCII_SIZE)
	{
		p[i++] = ft_print_nothing_arg_handler;
	}
	p['c'] = ft_print_c_arg_handler;
	p['s'] = ft_print_s_arg_handler;
	p['p'] = ft_print_p_arg_handler;
	p['d'] = ft_print_d_arg_handler;
	p['i'] = ft_print_i_arg_handler;
	p['u'] = ft_print_u_arg_handler;
	p['x'] = ft_print_x_arg_handler;
	p['X'] = ft_print_lx_arg_handler;
	p['%'] = ft_print_percent_arg_handler;
	is_initialized = 1;
	return ;
}
// cspdiuxX%

int	ft_printf(char *fmt, ...)
{
	va_list		ap;
	int			i;
	int			printed_len;
	static int	(*p[ASCII_SIZE])(va_list x, t_options * o);
	int			command_len;
	char		*command;
	t_options	*options;

	init_f_arr(p);
	va_start(ap, fmt);
	command_len = 0;
	printed_len = 0;
	i = 0;
	while (fmt[i])
	{
		if (fmt[i] == '%')
		{
			i++;
			command_len = ft_calc_next_chr(&fmt[i], '%');
			command = ft_substr(fmt, i, command_len);
			options = ft_parse_command(command);
			ft_print_options_for_debug(options);
			free(command);
			free(options);
			printed_len += p[(unsigned int)fmt[i]](ap, options);
			i++;
		}
		else
		{
			printed_len += write(1, &fmt[i++], 1);
		}
	}
	va_end(ap);
	return (printed_len);
}
