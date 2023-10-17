/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:41:39 by ntalmon           #+#    #+#             */
/*   Updated: 2023/10/16 17:19:56 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;
	unsigned char	value;

	p = (unsigned char *)b;
	value = (unsigned char) c;
	while (len != 0)
	{
		*p = value;
		len --;
		p ++;
	}
	return (b);
}

// int main() {
// 	char buffer[10]; // Ein Array aus 10 Zeichen (Bytes)
// 	// Initialisiere den Speicherbereich 'buffer' mit dem Wert 0
// 	ft_memset(buffer, 1, sizeof(buffer));
// 	// Gib den Inhalt des 'buffer' aus
// 	printf("Inhalt des buffers nach der Initialisierung:\n");
// 	for (int i = 0; i < sizeof(buffer); i++) {
// 		printf("buffer[%d] = %d\n", i, (int)buffer[i]);
// 	}
// 	return 0;
// }
	// // Fehlerprüfung: Überprüfe, ob der Zeiger 's' nicht NULL ist
	// if (s == NULL) {
	// 	return NULL;
	// }

	// // Fehlerprüfung: Überprüfe, ob 'n' nicht negativ ist
	// if (n <= 0) {
	// 	return s;
	// }
