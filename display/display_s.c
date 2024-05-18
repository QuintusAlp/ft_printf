/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qalpesse <qalpesse@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 21:53:21 by qalpesse          #+#    #+#             */
/*   Updated: 2024/04/26 00:06:41 by qalpesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_display_str(char *str)
{
	int	count;
	int	i;

	count = 0;
	if (!str)
		return (write(1, "(null)", 6));
	while (*str)
	{
		i = write(1, str, 1);
		if (i == -1)
			return (-1);
		count += i;
		str++;
	}
	return (count);
}
