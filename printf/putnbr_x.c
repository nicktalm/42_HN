/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr_x.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:04:50 by ntalmon           #+#    #+#             */
/*   Updated: 2023/10/27 09:50:25 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_bigx_putnbr(unsigned int ch, int *counter)
{
	char	*base;

	base = "0123456789ABCDEF";
	ft_putnbr_base(ch, counter, base);
}

void	ft_x_putnbr(unsigned int ch, int *counter)
{
	char	*base;

	base = "0123456789abcdef";
	ft_putnbr_base(ch, counter, base);
}

void	ft_putnbr_base(unsigned int ch, int *counter, char *base)
{
	if (ch > 15)
	{
		ft_putnbr_base(ch / 16, counter, base);
		ft_putnbr_base(ch % 16, counter, base);
	}
	if (ch < 16)
		ft_putchar_nbr(base[ch], counter);
}
