/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:52:21 by ntalmon           #+#    #+#             */
/*   Updated: 2024/01/16 14:57:03 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	list_a_sorted(t_node *stack)
{
	while (stack->next)
	{
		if (stack->nbr > stack->next->nbr)
			return (0);
		stack = stack->next;
	}
	return (1);
}

int	stack_size(t_node *stack)
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

int	main(int argc, char **argv)
{
	t_node	*list_a;
	t_node	*list_b;
	t_node	*new_node;
	int		i;
	int		*number;
	char	**string;
	int		j;

	i = 1;
	j = 0;
	list_a = NULL;
	list_b = NULL;
	string = NULL;
	while (i < argc)
	{
		string = ft_split(argv[i], ' ');
		i++;
		while (string[j] != NULL)
		{
			number = (int *)malloc(sizeof(int));
			*number = ft_atoi(string[j]);
			new_node = ft_lstnew_new(number);
			if (new_node)
				ft_lstadd_back_new(&list_a, new_node);
			else
				break ;
			j++;
		}
		j = 0;
	}
	if (!list_a_sorted(list_a))
	{
		if (stack_size(list_a) == 2)
			swap_a(&list_a);
		else if (stack_size(list_a) == 3)
			sort_three(&list_a);
		else
			sort_stacks(&list_a, &list_b);
	}
	// printf("Liste_A sortiert: \n");
	// while (list_a != 0)
	// {
	// 	printf("%d\n", list_a->nbr);
	// 	list_a = list_a->next;
	// }
	return (0);
}
