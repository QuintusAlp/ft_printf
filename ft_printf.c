/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qalpesse <qalpesse@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 10:43:13 by qalpesse          #+#    #+#             */
/*   Updated: 2024/04/26 11:29:15 by qalpesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

int	ft_convertissor(va_list args, const char *str)
{
	if (!ft_strncmp(str, "%c", 2))
		return (ft_display_char(va_arg(args, int)));
	else if (!ft_strncmp(str, "%s", 2))
		return (ft_display_str(va_arg(args, char *)));
	else if (!ft_strncmp(str, "%i", 2) || !ft_strncmp(str, "%d", 2))
		return (ft_display_int(va_arg(args, int)));
	else if (!ft_strncmp(str, "%u", 2))
		return (ft_display_unsignedint(va_arg(args, int)));
	else if (!ft_strncmp(str, "%x", 2))
		return (ft_display_exadecimal(va_arg(args, int), 'm'));
	else if (!ft_strncmp(str, "%X", 2))
		return (ft_display_exadecimal(va_arg(args, int), 'M'));
	else if (!ft_strncmp(str, "%%", 2))
		return (ft_display_persent());
	else if (!ft_strncmp(str, "%p", 2))
		return (ft_display_adress(va_arg(args, unsigned long)));
	return (0);
}

static int	ft_write(const char *str, int *count)
{
	*count += 1;
	return (write(1, str, 1));
}

int	ft_convertion(const char *str, int *count, va_list args)
{
	int	i;

	i = ft_convertissor(args, str);
	if (i == -1)
		return (-1);
	*count += i;
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		count;

	va_start(args, str);
	count = 0;
	while (*str)
	{
		if (*str == '%')
		{
			if (ft_convertion(str, &count, args))
				return (-1);
			str++;
		}
		else
			if (ft_write(str, &count) == -1)
				return (-1);
		str++;
	}
	va_end(args);
	if (*(str++))
		return (-1);
	return (count);
}
