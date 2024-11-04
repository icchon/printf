/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisobe <kaisobe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 23:59:13 by kaisobe           #+#    #+#             */
/*   Updated: 2024/11/05 08:16:51 by kaisobe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_print_x(unsigned int x)
{
	ft_putshex(x);
	return (ft_get_digit_cnt((unsigned int)x, 16));
}

int	ft_print_x_arg_handler(va_list ap)
{
	return (ft_print_x((unsigned int)va_arg(ap, unsigned int)));
}
