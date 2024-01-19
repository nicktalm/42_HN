/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_to_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:01:00 by ntalmon           #+#    #+#             */
/*   Updated: 2024/01/19 17:59:48 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

// weist jedem Knoten einen Index zu
// gibt an ob er sich in der oberen oder unteren Hälfte befindet
void	current_index(t_node *stack)
{
	int	i;
	int	half;

	i = 0;
	if (!stack)
		return ;
	half = stack_size(stack) / 2;
	while (stack)
	{
		stack->index = i;
		if (i <= half)
			stack->above_half = true;
		else
			stack->above_half = false;
		stack = stack->next;
		++i;
	}
}

void	set_target_a(t_node *a, t_node *b)
{
	t_node	*current_b;
	t_node	*target_node;
	int		best_match_index;

	while (a)
	{
		best_match_index = INT_MIN;
		current_b = b;
		while (current_b)
		{
			if (current_b->nbr < a->nbr && current_b->nbr > best_match_index)
			{
				best_match_index = current_b->nbr;
				target_node = current_b;
			}
			current_b = current_b->next;
		}
		if (best_match_index == INT_MIN)
			a->target_node = find_max(b);
		else
			a->target_node = target_node;
		a = a->next;
	}
}

void	cost_analysis_a(t_node *a, t_node *b)
{
	int	len_a;
	int	len_b;

	len_a = stack_size(a);
	len_b = stack_size(b);
	while (a)
	{
		a->costs_push = a->index;
		if (!(a->above_half))
			a->costs_push = len_a - (a->index);
		if (a->target_node->above_half)
			a->costs_push += a->target_node->index;
		else
			a->costs_push += len_b - (a->target_node->index);
		a = a->next;
	}
}

void	set_cheapest_node(t_node *stack)
{
	int		cheapest_value;
	t_node	*cheapest_node;

	if (!stack)
		return ;
	cheapest_value = INT_MAX;
	while (stack)
	{
		if (stack->costs_push < cheapest_value)
		{
			cheapest_value = stack->costs_push;
			cheapest_node = stack;
		}
		stack = stack->next;
	}
	cheapest_node->cheapest = true;
}

void	init_nodes_a(t_node *a, t_node *b)
{
	current_index(a);
	current_index(b);
	set_target_a(a, b);
	cost_analysis_a(a, b);
	set_cheapest_node(a);
}
