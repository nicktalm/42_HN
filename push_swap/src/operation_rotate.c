/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_rotate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 16:06:44 by ntalmon           #+#    #+#             */
/*   Updated: 2023/12/22 12:12:07 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rotate_a(t_list **stack)
{
	t_list	*tmp;

	tmp = *stack;
	*stack = (*stack)->next;
	tmp->next = NULL;
	ft_lstadd_back(stack, tmp);
	printf("ra\n");
}

void	rotate_b(t_list **stack)
{
	t_list	*tmp;

	tmp = *stack;
	*stack = (*stack)->next;
	tmp->next = NULL;
	ft_lstadd_back(stack, tmp);
	printf("rb\n");
}

void	rotate_a_b(t_list **stacka, t_list **stackb)
{
	t_list	*tmp;

	tmp = *stacka;
	*stacka = (*stacka)->next;
	tmp->next = NULL;
	ft_lstadd_back(stacka, tmp);
	tmp = *stackb;
	*stackb = (*stackb)->next;
	tmp->next = NULL;
	ft_lstadd_back(stackb, tmp);
	printf("rr\n");
}
