/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nothing.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisobe <kaisobe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 07:36:13 by kaisobe           #+#    #+#             */
/*   Updated: 2024/11/05 07:37:28 by kaisobe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_print_nothing(void)
{
	return (0);
}

int	ft_print_nothing_arg_handler(va_list ap)
{
	(void)ap;
	return (ft_print_nothing());
}
