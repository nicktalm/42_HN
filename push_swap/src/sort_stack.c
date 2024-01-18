/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:23:45 by ntalmon           #+#    #+#             */
/*   Updated: 2024/01/17 16:20:34 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sort_three(t_node **stack)
{
	t_node	*max_nbr;

	max_nbr = find_max(*stack);
	if (*stack == max_nbr)
		rotate_a(stack);
	else if ((*stack)->next == max_nbr)
		rotate_r_a(stack);
	if ((*stack)->nbr > (*stack)->next->nbr)
		swap_a(stack);
}

void	sort_stacks(t_node **a, t_node **b)
{
	int	len_a;

	len_a = stack_size(*a);
	if (len_a-- > 3 && !list_a_sorted(*a))
		pb(a, b);
	if (len_a-- > 3 && !list_a_sorted(*a))
		pb(a, b);
	while (len_a-- > 3 && !list_a_sorted(*a))
	{
		init_nodes_a(*a, *b);
		move_a_to_b(a, b);
	}
	sort_three(a);
	while (*b)
	{
		init_nodes_b(*a, *b);
		move_b_to_a(a, b);
	}
	current_index(*a);
	min_on_top(a);
}
