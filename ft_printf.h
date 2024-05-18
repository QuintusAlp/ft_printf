/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qalpesse <qalpesse@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:31:15 by qalpesse          #+#    #+#             */
/*   Updated: 2024/04/26 11:20:04 by qalpesse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
//libft
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_putnbr(long int n);
//////printf///////
//origin
int		ft_printf(const char *str, ...);
int		ft_convertissor(va_list args, const char *str);
// display 
int		ft_display_char(int c);
int		ft_display_str(char *str);
int		ft_display_int(long int n);
int		ft_display_unsignedint(unsigned int n);
int		ft_display_exadecimal(int n, char c);
int		ft_display_persent(void);
int		ft_display_adress(unsigned long a);
//additionnal-------
int		ft_printexadecimal(int a, char *base);
int		ft_printadress(unsigned long a, char *base);
int		ft_putunisgnednbr(unsigned int n);
// check errors
int		ft_checkerrors(va_list args, const char *str);
#endif