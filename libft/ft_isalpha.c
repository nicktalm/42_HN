/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:38:46 by ntalmon           #+#    #+#             */
/*   Updated: 2023/10/11 13:31:29 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int a)
{
	if ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z'))
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

// 	a = '9';
// 	if (ft_isalpha(a))
// 	{
// 		printf("%c ist ein Buchstabe.\n", a);
// 	}
// 	else
// 	{
// 		printf("%c ist kein Buchstabe.\n", a);
// 	}
// 	return (0);
// }
