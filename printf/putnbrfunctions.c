/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbrfunctions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:32:30 by ntalmon           #+#    #+#             */
/*   Updated: 2023/10/27 12:16:04 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_nbr(char c, int *counter)
{
	write (1, &c, 1);
	(*counter)++;
}

void	ft_putnbr(int n, int *counter)
{
	if (n < 0)
	{
		ft_putchar_nbr('-', counter);
		if (n == -2147483648)
		{
			write(1, "2147483648", 10);
			*counter += 10;
			return ;
		}
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10, counter);
		n = n % 10;
	}
	ft_putchar_nbr(n + 48, counter);
}

void	ft_u_putnbr(unsigned int n, int *counter)
{
	if (n > 9)
	{
		ft_putnbr(n / 10, counter);
		n = n % 10;
	}
	ft_putchar_nbr(n + 48, counter);
}

void	ft_p_putnbr(unsigned long int ch, int *counter)
{
	char	*base;

	base = "0123456789abcdef";
	if (ch > 15)
	{
		ft_p_putnbr(ch / 16, counter);
		ft_p_putnbr(ch % 16, counter);
	}
	if (ch < 16)
		ft_putchar_nbr(base[ch], counter);
}
