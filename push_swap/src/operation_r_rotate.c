/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_r_rotate.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 16:41:30 by ntalmon           #+#    #+#             */
/*   Updated: 2023/12/22 12:12:04 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rotate_r_a(t_list **stack)
{
	t_list	*tmplast;
	t_list	*seclast;

	tmplast = ft_lstlast(*stack);
	seclast = *stack;
	while (seclast != NULL)
	{
		if (seclast->next->next == NULL)
			seclast->next = NULL;
		seclast = seclast->next;
	}
	ft_lstadd_front(stack, tmplast);
	printf("rra\n");
}

void	rotate_r_b(t_list **stack)
{
	t_list	*tmplast;
	t_list	*seclast;

	tmplast = ft_lstlast(*stack);
	seclast = *stack;
	while (seclast != NULL)
	{
		if (seclast->next->next == NULL)
			seclast->next = NULL;
		seclast = seclast->next;
	}
	ft_lstadd_front(stack, tmplast);
	printf("rra\n");
}

void	rotate_r_a_b(t_list **stacka, t_list **stackb)
{
	t_list	*tmplast;
	t_list	*seclast;

	tmplast = ft_lstlast(*stacka);
	seclast = *stacka;
	while (seclast != NULL)
	{
		if (seclast->next->next == NULL)
			seclast->next = NULL;
		seclast = seclast->next;
	}
	ft_lstadd_front(stacka, tmplast);
	tmplast = ft_lstlast(*stackb);
	seclast = *stackb;
	while (seclast != NULL)
	{
		if (seclast->next->next == NULL)
			seclast->next = NULL;
		seclast = seclast->next;
	}
	ft_lstadd_front(stackb, tmplast);
	printf("rrr\n");
}
