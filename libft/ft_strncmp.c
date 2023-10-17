/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:45:42 by ntalmon           #+#    #+#             */
/*   Updated: 2023/10/16 11:32:14 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	size_t	a;

	a = 0;
	while (n > 0 && (s1[a] != '\0' || s2[a] != '\0'))
	{
		if ((unsigned char)s1[a] != (unsigned char)s2[a])
		{
			return ((unsigned char)s1[a] - (unsigned char)s2[a]);
		}
		a++;
		n--;
	}
	return (0);
}

// #include <stdio.h>

// int ft_strncmp(char *s1, char *s2, unsigned int n);

// int main()
// {
//     char str1[] = "Hellob";
//     char str2[] = "Hellaa";
//     unsigned int n = 6;
// 	char a = ft_strncmp(str1, str2, n);
// 	printf("%d",a);
//     return 0;
// }