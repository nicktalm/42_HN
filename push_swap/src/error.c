/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:14:07 by ntalmon           #+#    #+#             */
/*   Updated: 2024/01/18 13:42:44 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	error(void)
{
	write (2, "Error\n", 6);
	exit (0);
}


void	error_2(char **string)
{
	write (2, "Error\n", 6);
	free_string(string);
	exit (0);
}
