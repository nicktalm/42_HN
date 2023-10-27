/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whattoprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:10:34 by ntalmon           #+#    #+#             */
/*   Updated: 2023/10/27 10:47:13 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	what_to_print1(va_list	ptr, int *counter, char print)
{
	char				*output1;
	unsigned long int	output2;

	if (print == 'c')
	{
		ft_putchar((char)va_arg(ptr, int));
		(*counter)++;
	}
	else if (print == 's')
	{
		output1 = va_arg(ptr, char *);
		ft_putstr(output1, counter);
	}
	else if (print == '%')
	{
		ft_putchar('%');
		(*counter)++;
	}
	if (print == 'p')
	{
		write(1, "0x", 2);
		*counter = *counter + 2;
		output2 = va_arg(ptr, unsigned long int);
		ft_p_putnbr(output2, counter);
	}
}

void	what_to_print2(va_list	ptr, int *counter, char print)
{
	int	output;

	if (print == 'd' || print == 'i')
	{
		output = va_arg(ptr, int);
		ft_putnbr(output, counter);
	}
	else if (print == 'x')
	{
		output = va_arg(ptr, unsigned int);
		ft_x_putnbr(output, counter);
	}
	else if (print == 'X')
	{
		output = va_arg(ptr, unsigned int);
		ft_bigx_putnbr(output, counter);
	}
	else if (print == 'u')
	{
		output = va_arg(ptr, unsigned int);
		ft_u_putnbr(output, counter);
	}
}
