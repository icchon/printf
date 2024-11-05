/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_percent.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisobe <kaisobe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 07:41:16 by kaisobe           #+#    #+#             */
/*   Updated: 2024/11/05 12:38:52 by kaisobe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	ft_print_percent(void)
{
	return (write(1, "%", 1));
}

int	ft_print_percent_arg_handler(va_list ap, t_options *options)
{
	(void)ap;
	(void)options;
	return (ft_print_percent());
}
