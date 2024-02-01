/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:27:32 by ntalmon           #+#    #+#             */
/*   Updated: 2024/02/01 15:27:42 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minitalk.h"

void	decode_char(int signal)
{
	static int	bit;
	static int	i;

	if (signal == SIGUSR1)
		i |= (0x01 << bit);
	bit++;
	if (bit == 8)
	{
		ft_printf("%c", i);
		bit = 0;
		i = 0;
	}
}

int	main(int argc, char **argv)
{
	int	pid;

	argv = 0;
	if (argc != 1)
	{
		ft_putendl_fd(M_SERVER, 2);
		ft_putendl_fd(M_SERVER2, 2);
		return (0);
	}
	pid = getpid();
	ft_printf(S_PID, pid);
	ft_putendl_fd(S_WLC, 1);
	while (argc == 1)
	{
		signal(SIGUSR1, decode_char);
		signal(SIGUSR2, decode_char);
		pause();
	}
	return (0);
}
