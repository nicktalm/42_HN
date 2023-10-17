/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:13:16 by ntalmon           #+#    #+#             */
/*   Updated: 2023/10/16 17:21:16 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	else
	{
		return (c);
	}
}

// int	main(void)
// {
// 	int	c;
// 	int	result;

// 	c = 'a';
// 	result = ft_toupper(c);
// 	printf("Das ist die Ausgabe: '%c'\n", result);
// }
