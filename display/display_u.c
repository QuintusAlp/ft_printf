/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qalpesse <qalpesse@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 22:33:38 by qalpesse          #+#    #+#             */
/*   Updated: 2024/04/26 11:12:51 by qalpesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putunisgnednbr(unsigned int n)
{
	char	c;

	if (n <= 9)
	{
		c = n + 48;
		if (write(1, &c, 1) == -1)
			return (-1);
	}
	else
	{
		if (ft_putunisgnednbr(n / 10) == -1)
			return (-1);
		if (ft_putunisgnednbr(n % 10) == -1)
			return (-1);
	}
	return (0);
}

int	ft_display_unsignedint(unsigned int n)
{
	int				count;
	unsigned long	lu;

	lu = n;
	if (ft_putunisgnednbr(n) == -1)
		return (-1);
	if (n == 0)
		return (1);
	count = 0;
	while (lu > 0)
	{
		count ++;
		lu /= 10;
	}
	return (count);
}
