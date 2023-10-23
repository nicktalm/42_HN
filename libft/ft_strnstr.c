/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:28:52 by ntalmon           #+#    #+#             */
/*   Updated: 2023/10/23 16:31:06 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	a;
	size_t	b;

	if (n == 0 && str == NULL)
		return (NULL);
	a = 0;
	if (to_find[0] == '\0')
	{
		return ((char *)str);
	}
	while (str[a] != '\0' && a < n)
	{
		b = 0;
		while ((unsigned char)str[a + b]
			== (unsigned char)to_find[b] && (a + b) < n)
		{
			b++;
			if (to_find[b] == '\0')
			{
				return ((char *)&str[a]);
			}
		}
		a++;
	}
	return (NULL);
}
