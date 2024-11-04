/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisobe <kaisobe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 23:52:56 by kaisobe           #+#    #+#             */
/*   Updated: 2024/11/05 08:17:06 by kaisobe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_print_c(int c)
{
	return (write(1, &c, 1));
}

int	ft_print_c_arg_handler(va_list ap)
{
	return (ft_print_c((int)va_arg(ap, int)));
}
