/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:26:13 by ntalmon           #+#    #+#             */
/*   Updated: 2023/10/16 17:12:41 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + 32);
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

// 	c = 'A';
// 	result = ft_tolower(c);
// 	printf("Das ist die Ausgabe: '%c'\n", result);
// }
