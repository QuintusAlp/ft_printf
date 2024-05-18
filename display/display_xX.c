/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_xX.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qalpesse <qalpesse@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 22:35:30 by qalpesse          #+#    #+#             */
/*   Updated: 2024/04/26 11:16:15 by qalpesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_printexadecimal(int a, char *base)
{
	char	tab[9];
	int		i;
	int		b;

	i = 0;
	if (a == 0)
	{
		return (write(1, "0", 1));
	}
	while (a != 0 && i < 8)
	{
		tab[i] = base[a & 0xf];
		a = a >> 4;
		i++;
	}
	tab[i] = '\0';
	b = i - 1;
	while (b >= 0)
	{
		if (write(1, &tab[b], 1) == -1)
			return (-1);
		b--;
	}
	return (i);
}

int	ft_display_exadecimal(int n, char c)
{
	if (c == 'm')
		return (ft_printexadecimal(n, "0123456789abcdef"));
	if (c == 'M')
		return (ft_printexadecimal(n, "0123456789ABCDEF"));
	else
		return (0);
}
