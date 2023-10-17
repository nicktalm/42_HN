/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:45:26 by ntalmon           #+#    #+#             */
/*   Updated: 2023/10/13 12:59:15 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int a)
{
	if ((a >= 0 && a <= 127))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

// int	main(void)
// {
// 	char	a;

// 	a = 'a';
// 	if (ft_isascii(a))
// 	{
// 		printf("%c ist ein ASCII-Zeichen.\n", a);
// 	}
// 	else
// 	{
// 		printf("%c ist kein ASCII-Zeichen.\n", a);
// 	}
// 	return (0);
// }
