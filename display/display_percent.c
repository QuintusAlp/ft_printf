/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_percent.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qalpesse <qalpesse@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 22:36:32 by qalpesse          #+#    #+#             */
/*   Updated: 2024/04/25 23:17:18 by qalpesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_display_persent(void)
{
	char	c;

	c = '%';
	return (write(1, &c, 1));
}
