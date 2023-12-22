/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:52:21 by ntalmon           #+#    #+#             */
/*   Updated: 2023/12/22 12:26:50 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	list_a_sorted(t_list *stack)
{
	while (stack->next)
	{
		if (*(int *)stack->content > *(int *)stack->next->content)
			return (0);
		stack = stack->next;
	}
	return (1);
}

int	stack_size(t_list *stack)
{
	int	c;

	c = 0;
	while (stack)
	{
		stack = stack->next;
		c++;
	}
	return (c);
}

t_list	*find_max(t_list *stack)
{
	int		max;
	t_list	*max_nbr;

	max = INT_MIN;
	max_nbr = NULL;
	while (stack)
	{
		if (*(int *)stack->content > max)
		{
			max = *(int *)stack->content;
			max_nbr = stack;
		}
		stack = stack->next;
	}
	return (max_nbr);
}

void	sort_three(t_list **stack)
{
	t_list	*max_nbr;

	max_nbr = find_max(*stack);
	if (*stack == max_nbr)
		rotate_a(stack);
	else if ((*stack)->next == max_nbr)
		rotate_r_a(stack);
	if (*(int *)(*stack)->content > *(int *)(*stack)->next->content)
		swap_a(stack);
}

int	main(int argc, char **argv)
{
	t_list	*list_a;
	t_list	*list_b;
	t_list	*new_node;
	int		i;
	int		*number;

	i = 1;
	list_b = NULL;
	while (i < argc)
	{
		number = (int *)malloc(sizeof(int));
		*number = ft_atoi(argv[i]);
		new_node = ft_lstnew(number);
		if (new_node)
			ft_lstadd_back(&list_a, new_node);
		else
			break ;
		i++;
	}
	if (!list_a_sorted(list_a))
	{
		if (stack_size(list_a) == 2)
			swap_a(&list_a);
		else if (stack_size(list_a) == 3)
			sort_three(&list_a);
	}
	t_list *current = list_a;
	printf("Liste_A: \n");
	while (current != NULL)
	{
		printf("%d\n", *((int *)current->content));
		current = current->next;
	}
	return (0);
}
