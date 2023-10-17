/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:30:19 by ntalmon           #+#    #+#             */
/*   Updated: 2023/10/16 17:51:33 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (s == 0)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

// #include <stdio.h>

// void transform(unsigned int index, char *c)
// {
//     // Beispieltransformation: Zeichen in Großbuchstaben umwandeln
//     if (*c >= 'a' && *c <= 'z')
//     {
//         *c = *c - 'a' + 'A';
//     }
// }

// int main()
// {
//     char inputString[] = "Hello, World!";

//     // Anwenden der ft_striteri-Funktion mit der transform-Funktion
//     ft_striteri(inputString, transform);

//     printf("Transformiert: %s\n", inputString);

//     return 0;
// }
