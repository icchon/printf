/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisobe <kaisobe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 23:57:46 by kaisobe           #+#    #+#             */
/*   Updated: 2024/11/05 07:55:33 by kaisobe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_print_d(int d)
{
	int	is_sign;

	ft_putnbr(d);
	is_sign = (d < 0);
	return (ft_get_digit_cnt((unsigned int)(d * is_sign), 10) + is_sign);
}

int	ft_print_d_arg_handler(va_list ap)
{
	return (ft_print_d((int)va_arg(ap, int)));
}
