/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:33:58 by ntalmon           #+#    #+#             */
/*   Updated: 2023/10/06 17:45:51 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int a)
{
	if ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z')
		|| (a >= '0' && a <= '9'))
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

// 	a = '-';
// 	if (ft_isalnum(a))
// 	{
// 		printf("%c ist alphanumerisch.\n", a);
// 	}
// 	else
// 	{
// 		printf("%c ist nicht alphanumerisch.\n", a);
// 	}
// 	return (0);
// }
