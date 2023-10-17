/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:53:06 by ntalmon           #+#    #+#             */
/*   Updated: 2023/10/06 17:51:33 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int a)
{
	if ((a >= '0' && a <= '9'))
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
// 	int	a;

// 	a = '3';
// 	if (ft_isalpha(a))
// 	{
// 		printf("%c ist eine Ziffer.\n", a);
// 	}
// 	else
// 	{
// 		printf("%c ist keine Ziffer.\n", a);
// 	}
// 	return (0);
// }
