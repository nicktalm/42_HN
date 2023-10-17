/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 13:39:08 by ntalmon           #+#    #+#             */
/*   Updated: 2023/10/16 14:59:40 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n != 0)
	{
		*p = 0;
		n --;
		p ++;
	}
}

// int main() {
//     char buffer[10];

//     // Initialisiere den Speicherbereich mit Nullen (Verwendung von my_bzero)
//     ft_bezero(buffer, sizeof(buffer));

//     // Drucke den Inhalt des Speicherbereichs
//     for (int i = 0; i < sizeof(buffer); i++) {
//         printf("%d ", buffer[i]);
//     }

//     return 0;
// }
