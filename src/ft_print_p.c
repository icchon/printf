/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisobe <kaisobe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 23:57:12 by kaisobe           #+#    #+#             */
/*   Updated: 2024/11/05 08:16:57 by kaisobe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_print_p(uintptr_t p)
{
	const char	*prefix = "0x";
	const char	*msg = "(nil)";

	if (p == 0)
	{
		ft_putstr((char *)msg);
		return (ft_strlen((char *)msg));
	}
	ft_putstr((char *)prefix);
	ft_putshex((unsigned int)p);
	return (ft_strlen((char *)prefix) + ft_get_digit_cnt((unsigned int)p, 16));
}

int	ft_print_p_arg_handler(va_list ap)
{
	return (ft_print_p((uintptr_t)va_arg(ap, void *)));
}
