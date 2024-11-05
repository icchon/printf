/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_command.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisobe <kaisobe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:50:20 by kaisobe           #+#    #+#             */
/*   Updated: 2024/11/05 11:59:30 by kaisobe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static void	ft_parse_flg(char *command, t_options *options)
{
	if (*command == '-')
		options->flg = PADDING_LEFT;
	else if (*command == '0')
		options->flg = PADDING_SPACE;
	else if (*command == '+')
		options->flg = SIGNED;
	else if (*command == ' ')
		options->flg = SIGNED_SPACE;
	else if (*command == '#')
		options->flg = OCT_HEX_PREFIX;
	else
		options->flg = NONE;
}

static void	ft_parse_width(char *command, t_options *options)
{
	int		i;
	char	*width_command;
	int		width_command_len;

	i = 0;
	if (!(options->flg == NONE || options->flg == UNDEFINED))
	{
		i++;
	}
	width_command_len = ft_calc_next_chr(command, '%');
	width_command = ft_substr(command, i, width_command_len);
	options->width = ft_atoi(width_command);
	free(width_command);
	return ;
}

static void	ft_parse_prescions(char *command, t_options *options)
{
	if (!ft_contain(command, '.'))
	{
		options->precision = -1;
		return ;
	}
	options->precision = ft_atoi(ft_strchr(command, '.') + 1);
	return ;
}

t_options	*ft_parse_command(char *command)
{
	t_options	*options;

	options = ft_create_new_options();
	ft_parse_flg(command, options);
	ft_parse_width(command, options);
	ft_parse_prescions(command, options);
	return (options);
}
