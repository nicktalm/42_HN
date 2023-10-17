/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:48:47 by ntalmon           #+#    #+#             */
/*   Updated: 2023/10/16 17:20:36 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// concatenating 's1' and 's2' in a new string, using malloc
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*con_str;
	int		j;
	int		i;

	j = 0;
	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	con_str = malloc ((ft_strlen (s1) + ft_strlen (s2) + 1));
	if (con_str == NULL)
		return (NULL);
	while (s1[j] != '\0')
		con_str[i++] = s1[j++];
	j = 0;
	while (s2[j] != '\0')
		con_str[i++] = s2[j++];
	con_str[i] = '\0';
	return (con_str);
}

// int	main(void)
// {
// 	char	s1[] = "Hello ";
// 	char	s2[] = "42 students!<3";
// 	char	*z;

// 	z = ft_strjoin(s1, s2);
// 	printf("result: %s\n", z);
// 	return (0);
// }
