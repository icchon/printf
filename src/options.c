/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   options.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisobe <kaisobe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:43:30 by kaisobe           #+#    #+#             */
/*   Updated: 2024/11/05 12:15:51 by kaisobe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

t_options	*ft_create_new_options(void)
{
	t_options	*options;

	options = (t_options *)malloc(sizeof(t_options) * 1);
	if (options == NULL)
		return (NULL);
	options->flg = UNDEFINED;
	options->precision = -1;
	options->width = 0;
	return (options);
}

void	ft_print_options_for_debug(t_options *options)
{
	if (options->flg == PADDING_LEFT)
		printf("flg : PADDING_LEFT\n");
	else if (options->flg == PADDING_SPACE)
		printf("flg : PADDING_SPACE\n");
	else if (options->flg == SIGNED)
		printf("flg : SIGNED\n");
	else if (options->flg == SIGNED_SPACE)
		printf("flg : SIGNED_SPACE\n");
	else if (options->flg == NONE)
		printf("flg : NONE\n");
	else if (options->flg == UNDEFINED)
		printf("flg : UNDEFINED\n");
	else
		printf("Un Handled Error\n");
	printf("width : %d\n", options->width);
	printf("precsion : %d\n", options->precision);
	return ;
}
