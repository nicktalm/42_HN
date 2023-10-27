/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:40:03 by ntalmon           #+#    #+#             */
/*   Updated: 2023/10/27 10:39:00 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *print, ...);
void	ft_putstr(char *s, int *counter);
void	ft_putchar(char c);
void	what_to_print1(va_list	ptr, int *counter, char print);
void	what_to_print2(va_list	ptr, int *counter, char print);
void	ft_putnbr(int nb, int *counter);
void	ft_x_putnbr(unsigned int ch, int *counter);
void	ft_bigx_putnbr(unsigned int ch, int *counter);
void	ft_u_putnbr(unsigned int n, int *counter);
void	ft_p_putnbr(unsigned long int ch, int *counter);
void	ft_putchar_nbr(char c, int *counter);
void	ft_putnbr_base(unsigned int ch, int *counter, char *base);

#endif