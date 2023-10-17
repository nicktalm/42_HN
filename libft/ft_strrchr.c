/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:18:35 by ntalmon           #+#    #+#             */
/*   Updated: 2023/10/16 18:15:52 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	a;

	len = ft_strlen(s);
	a = (char)c;
	while (len >= 0)
	{
		if (s[len] == a)
			return ((char *)s + (len));
		len--;
	}
	return (0);
}
