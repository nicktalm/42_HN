/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_swap_push.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:51:29 by ntalmon           #+#    #+#             */
/*   Updated: 2023/12/22 12:12:10 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	swap_a(t_list **stack)
{
	int	*tmp;

	tmp = (*stack)->content;
	(*stack)->content = (*stack)->next->content;
	(*stack)->next->content = tmp;
	printf("sa\n");
}

void	swap_b(t_list **stack)
{
	int	*tmp;

	tmp = (*stack)->content;
	(*stack)->content = (*stack)->next->content;
	(*stack)->next->content = tmp;
	printf("sb\n");
}

void	swap_a_b(t_list **stacka, t_list **stackb)
{
	int	*tmp;

	tmp = (*stacka)->content;
	(*stacka)->content = (*stacka)->next->content;
	(*stacka)->next->content = tmp;
	tmp = (*stackb)->content;
	(*stackb)->content = (*stackb)->next->content;
	(*stackb)->next->content = tmp;
	printf("ss\n");
}

void	pa(t_list **fromb, t_list **toa)
{
	t_list	*tmp;

	tmp = *fromb;
	*fromb = (*fromb)->next;
	tmp->next = NULL;
	ft_lstadd_front(toa, tmp);
	printf("pa\n");
}

void	pb(t_list **froma, t_list **tob)
{
	t_list	*tmp;

	tmp = *froma;
	*froma = (*froma)->next;
	tmp->next = NULL;
	ft_lstadd_front(tob, tmp);
	printf("pb\n");
}
