/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:01:56 by ntalmon           #+#    #+#             */
/*   Updated: 2023/10/23 16:39:56 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	dest_length;
	unsigned int	src_length;
	unsigned int	s_left;
	unsigned int	a;

	if (size == 0)
		return (ft_strlen(src));
	dest_length = ft_strlen(dest);
	src_length = ft_strlen(src);
	if (size <= dest_length)
	{
		return (size + src_length);
	}
	s_left = size - dest_length - 1;
	a = 0;
	while (a < s_left && src[a] != '\0')
	{
		dest[dest_length + a] = src[a];
		a++;
	}
	dest[dest_length + a] = '\0';
	return (dest_length + src_length);
}

// int main()
// {
//     char dest[20] = "Hello ";
//     char *src = "world";
//     unsigned int size = 12;

//     unsigned int result = ft_strlcat(dest, src, size);

//     printf("After ft_strlcat: %s\n", dest);
//     printf("Total length after concatenation: %u\n", result);

//     return (0);
// }