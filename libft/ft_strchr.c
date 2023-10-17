/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:47:50 by ntalmon           #+#    #+#             */
/*   Updated: 2023/10/16 18:14:03 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const	char *s, int c)
{
	int		len;
	char	a;

	len = 0;
	a = (char)c;
	while (s[len] != a)
	{
		if (s[len] == '\0')
			return (0);
		len++;
	}
	return ((char *)s + len);
}

// char	*ft_strchr(const char *str, int a);

// int main() {
// 	const char *str = "Hello, World!";
// 	int searchChar = 'o';

// 	char *found = ft_strchr(str, searchChar);

// 	if (found != NULL) {
// 		printf("Gefundenes Zeichen: %c\n", *found);
// 	} else {
// 		printf("Zeichen nicht gefunden.\n");
// 	}
// 	return 0;
// }
