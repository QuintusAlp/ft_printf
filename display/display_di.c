/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_di.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qalpesse <qalpesse@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 22:32:14 by qalpesse          #+#    #+#             */
/*   Updated: 2024/04/26 11:18:50 by qalpesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

// void	ft_putnbr(int n)
// {
// 	char	c;

// 	if (n == -2147483648)
// 	{
// 		write(1, "-", 1);
// 		write(1, "2147483648", 10);
// 	}
// 	else if (n < 0)
// 	{
// 		write(1, "-", 1);
// 		n *= -1;
// 		ft_putnbr(n);
// 	}
// 	else if (n <= 9)
// 	{
// 		c = n + 48;
// 		write(1, &c, 1);
// 	}
// 	else
// 	{
// 		ft_putnbr(n / 10);
// 		ft_putnbr(n % 10);
// 	}
// }
int	ft_putnbr(long int n)
{
	char	c;

	if (n < 0)
	{
		if (write(1, "-", 1) == -1)
			return (-1);
		n *= -1;
		if (ft_putnbr(n) == -1)
			return (-1);
	}
	else if (n <= 9)
	{
		c = n + '0';
		if (write(1, &c, 1) == -1)
			return (-1);
	}
	else
	{
		if (ft_putnbr(n / 10) == -1)
			return (-1);
		if (ft_putnbr(n % 10) == -1)
			return (-1);
	}
	return (0);
}

int	ft_display_int(long int l)
{
	int		count;

	if (l > 2147483647 || l < -2147483648)
		return (-1);
	if (ft_putnbr(l) == -1)
		return (-1);
	if (l == 0)
		return (1);
	if (l < 0)
	{
		count = 1;
		l *= -1;
	}
	else
		count = 0;
	while (l > 0)
	{
		count ++;
		l /= 10;
	}
	return (count);
}
