/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_lx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisobe <kaisobe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 23:59:32 by kaisobe           #+#    #+#             */
/*   Updated: 2024/11/05 12:38:22 by kaisobe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	ft_print_lx(unsigned int lx, t_options *options)
{
	(void)options;
	ft_putlhex(lx);
	return (ft_get_digit_cnt((unsigned int)lx, 16));
}

int	ft_print_lx_arg_handler(va_list ap, t_options *options)
{
	return (ft_print_lx((unsigned int)va_arg(ap, unsigned int), options));
}
