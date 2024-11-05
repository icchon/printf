/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisobe <kaisobe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 23:59:13 by kaisobe           #+#    #+#             */
/*   Updated: 2024/11/05 12:39:32 by kaisobe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	ft_print_x(unsigned int x, t_options *options)
{
	(void)options;
	ft_putshex(x);
	return (ft_get_digit_cnt((unsigned int)x, 16));
}

int	ft_print_x_arg_handler(va_list ap, t_options *options)
{
	return (ft_print_x((unsigned int)va_arg(ap, unsigned int), options));
}
