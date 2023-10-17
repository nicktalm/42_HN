/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:10:15 by ntalmon           #+#    #+#             */
/*   Updated: 2023/10/16 16:17:02 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	size;

	if (s == NULL)
		return ;
	size = ft_strlen(s);
	write (fd, s, size);
	write (fd, "\n", 1);
}

// int	main(void)
// {
// 	ft_putendl_fd("Hello 42!", 1);
// 	return (0);
// }
