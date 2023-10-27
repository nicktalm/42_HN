/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:41:42 by ntalmon           #+#    #+#             */
/*   Updated: 2023/10/27 10:37:29 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_printf(const char *print, ...)
{
	va_list	ptr;
	int		i;
	int		c;

	c = 0;
	i = 0;
	va_start(ptr, print);
	while (print[i] != '\0')
	{
		if (print[i] == '%')
		{
			i++;
			what_to_print1(ptr, &c, print[i]);
			what_to_print2(ptr, &c, print[i]);
		}
		else
		{
			ft_putchar(print[i]);
			c++;
		}
		i++;
	}
	va_end(ptr);
	return (c);
}

// int	main(void)
// {
// 	char	mychar;
// 	char	*str;
// 	unsigned long	a;

// 	mychar = 'A';
// 	str = "10";
// 	a = 3;
// 	// ft_printf("Dies ist ein Zeichen: %s %c\n", str, mychar);
// 	printf("Dies ist ein Zeichen: %p\n", str);
// 	return (0);
// }
