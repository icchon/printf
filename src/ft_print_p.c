/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisobe <kaisobe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 23:57:12 by kaisobe           #+#    #+#             */
/*   Updated: 2024/11/05 12:38:42 by kaisobe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	ft_print_p(uintptr_t p, t_options *options)
{
	const char	*prefix = "0x";
	const char	*msg = "(nil)";

	(void)options;
	if (p == 0)
	{
		ft_putstr((char *)msg);
		return (ft_strlen((char *)msg));
	}
	ft_putstr((char *)prefix);
	ft_putshex((unsigned int)p);
	return (ft_strlen((char *)prefix) + ft_get_digit_cnt((unsigned int)p, 16));
}

int	ft_print_p_arg_handler(va_list ap, t_options *options)
{
	return (ft_print_p((uintptr_t)va_arg(ap, void *), options));
}
