/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:27:54 by ntalmon           #+#    #+#             */
/*   Updated: 2023/10/16 12:32:44 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;
	size_t	i;

	d = (char *)dst;
	s = (char *)src;
	i = 0;
	if (dst == src)
		return (dst);
	if (s < d)
	{
		while (len > 0)
		{
			len--;
			d[len] = s[len];
		}
	}
	else
	{
		ft_memcpy(d, s, len);
	}
	return (dst);
}

// void	*ft_memmove(void *dst, const void *src, size_t len);

// int main() {
//     char source[] = "Hello, World!";
//     char destination[20];

//     ft_memmove(destination, source, 4);

//     printf("Source: %s\n", source);
//     printf("Destination: %s\n", destination);

//     return 0;
// }