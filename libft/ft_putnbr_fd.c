/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:17:21 by ntalmon           #+#    #+#             */
/*   Updated: 2023/10/16 17:00:50 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_put_positive_nbr(int nb, int fd)
{
	char	a[12];
	int		i;

	i = 0;
	while (nb != 0)
	{
		a[i++] = nb % 10 + '0';
		nb /= 10;
	}
	i--;
	while (i >= 0)
	{
		ft_putchar(a[i--], fd);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == 0)
	{
		ft_putchar('0', fd);
		return ;
	}
	if (n == INT_MIN)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-', fd);
		n *= -1;
	}
	ft_put_positive_nbr(n, fd);
}

// int	main(void)
// {
// 	ft_putnbr_fd(1234, 1);
// 	return (0);
// }
