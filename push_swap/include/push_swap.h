/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:56:12 by ntalmon           #+#    #+#             */
/*   Updated: 2023/12/22 12:12:35 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../lib/libft/libft.h"
# include "../lib/printf/ft_printf.h"

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void	swap_a(t_list **stack);
void	swap_b(t_list **stack);
void	swap_a_b(t_list **stacka, t_list **stackb);
void	pa(t_list **fromb, t_list **toa);
void	pb(t_list **froma, t_list **tob);

void	rotate_a(t_list **stack);
void	rotate_b(t_list **stack);
void	rotate_a_b(t_list **stacka, t_list **stackb);

void	rotate_r_a(t_list **stack);
void	rotate_r_b(t_list **stack);
void	rotate_a_b(t_list **stacka, t_list **stackb);

#endif