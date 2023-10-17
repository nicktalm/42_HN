/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:45:30 by ntalmon           #+#    #+#             */
/*   Updated: 2023/10/16 17:58:16 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, int n)
{
	char		*char_dest;
	const char	*char_src;
	int			i;

	char_dest = (char *) dest;
	char_src = (char *) src;
	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		char_dest[i] = char_src[i];
		i++;
	}
	return (dest);
}

// int main() {
//     char source[] = "Hello, World!";
//     char destination[20];  // Zielspeicher

//     // Kopiere die ersten 13 Bytes von source in destination
//     memcpy(destination, source, 13);

//     // Nullterminiere den Zielstring (manuell hinzufügen)
//     destination[13] = '\0';

//     printf("Kopierter String: %s\n", destination);

//     return 0;
// }
