/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisobe <kaisobe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 13:33:59 by kaisobe           #+#    #+#             */
/*   Updated: 2024/11/05 08:11:28 by kaisobe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int	main(void)
{
	ft_printf("%c\n%s\n%p\n%d\n%i\n%u\n%x\n%X\n%% end", 'A', NULL, "poitner",
		-42, -42, 42, 255, 255);
	// ft_putshex(15);
	// ft_putshex(9);
	// ft_putshex(16);
	// ft_putshex(255);
	return (0);
}
