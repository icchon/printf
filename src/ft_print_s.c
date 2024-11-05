/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisobe <kaisobe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 23:56:23 by kaisobe           #+#    #+#             */
/*   Updated: 2024/11/05 12:40:47 by kaisobe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	ft_print_s(char *s, t_options *options)
{
	const char	*msg = "(null)";

	(void)options;
	if (s == NULL)
	{
		ft_putstr((char *)msg);
		return (ft_strlen((char *)msg));
	}
	ft_putstr(s);
	return (ft_strlen(s));
}

int	ft_print_s_arg_handler(va_list ap, t_options *options)
{
	return (ft_print_s((char *)va_arg(ap, char *), options));
}
