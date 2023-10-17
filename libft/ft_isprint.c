/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:20:39 by ntalmon           #+#    #+#             */
/*   Updated: 2023/10/16 10:30:52 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int a)
{
	if ((a >= 32 && a <= 126))
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
// 	if (ft_isprint(a))
// 	{
// 		printf("%c ist ein druckbares Zeichen.\n", a);
// 	}
// 	else
// 	{
// 		printf("%c ist kein druckbares Zeichen.\n", a);
// 	}
// 	return (0);
// }
