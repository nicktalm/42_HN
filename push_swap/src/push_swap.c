/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:52:21 by ntalmon           #+#    #+#             */
/*   Updated: 2024/01/18 14:25:49 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	free_list(t_node *list_a)
{
	t_node	*tmp;

	while (list_a)
	{
		tmp = list_a->next;
		free(list_a);
		list_a = tmp;
	}
}

int	main(int argc, char **argv)
{
	t_node	*list_a;
	t_node	*list_b;

	list_a = NULL;
	list_b = NULL;
	if (argc <= 1)
		return (0);
	list_a = parsing(list_a, argc, argv);
	if (!list_a_sorted(list_a))
	{
		if (stack_size(list_a) == 2)
			swap_a(&list_a);
		else if (stack_size(list_a) == 3)
			sort_three(&list_a);
		else
			sort_stacks(&list_a, &list_b);
	}
	free_list(list_a);
	// ft_printf("Liste_A sortiert: \n");
	// while (list_a != 0)
	// {
	// 	ft_printf("%d\n", list_a->nbr);
	// 	list_a = list_a->next;
	// }
	// system("leaks push_swap");
	return (0);
}
