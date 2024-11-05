/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisobe <kaisobe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 23:58:35 by kaisobe           #+#    #+#             */
/*   Updated: 2024/11/05 12:39:19 by kaisobe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	ft_print_u(unsigned int u, t_options *options)
{
	(void)options;
	ft_putnbr(u);
	return (ft_get_digit_cnt((unsigned int)u, 10));
}

int	ft_print_u_arg_handler(va_list ap, t_options *options)
{
	return (ft_print_u((unsigned int)va_arg(ap, unsigned int), options));
}
