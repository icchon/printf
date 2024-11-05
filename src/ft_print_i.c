/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_i.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisobe <kaisobe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 23:58:08 by kaisobe           #+#    #+#             */
/*   Updated: 2024/11/05 12:38:12 by kaisobe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	ft_print_i(int d, t_options *options)
{
	int	is_sign;

	(void)options;
	ft_putnbr(d);
	is_sign = (d < 0);
	return (ft_get_digit_cnt((unsigned int)(d * is_sign), 10) + is_sign);
}

int	ft_print_i_arg_handler(va_list ap, t_options *options)
{
	return (ft_print_i((int)va_arg(ap, int), options));
}
