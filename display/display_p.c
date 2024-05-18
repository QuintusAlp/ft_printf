/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qalpesse <qalpesse@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 22:30:30 by qalpesse          #+#    #+#             */
/*   Updated: 2024/04/26 11:19:26 by qalpesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_printadress_malloc(unsigned long a)
{
	int	count;

	count = 0;
	while (a != 0)
	{
		a = a >> 4;
		count++;
	}
	return (count);
}

int	ft_print_tabreverse(char *tab, int l)
{
	while (l >= 0)
	{
		if (write(1, &tab[l], 1) == -1)
			return (-1);
		l--;
	}
	return (0);
}

int	ft_printadress(unsigned long a, char *base)
{
	char	*tab;
	int		i;

	i = 0;
	if (a == 0)
	{
		return (write(1, "0x0", 3));
	}
	tab = malloc(ft_printadress_malloc(a) + 1);
	if (!tab)
		return (-1);
	while (a != 0)
	{
		tab[i] = base[a & 0xf];
		a = a >> 4;
		i++;
	}
	tab[i] = '\0';
	if (write(1, "0x", 2) == -1 || ft_print_tabreverse(tab, i - 1) == -1)
	{
		free(tab);
		return (-1);
	}
	free(tab);
	return (i + 2);
}

int	ft_display_adress(unsigned long a)
{
	return (ft_printadress(a, "0123456789abcdef"));
}
