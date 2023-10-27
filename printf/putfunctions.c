/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putfunctions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:34:04 by ntalmon           #+#    #+#             */
/*   Updated: 2023/10/27 10:38:07 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putstr(char *s, int *counter)
{
	size_t	size;

	if (s == NULL)
	{
		write (1, "(null)", 6);
		*counter = *counter + 6;
		return ;
	}
	size = ft_strlen(s);
	write (1, s, size);
	*counter = *counter + size;
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
