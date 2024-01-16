/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:56:12 by ntalmon           #+#    #+#             */
/*   Updated: 2024/01/16 14:43:39 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../lib/libft/libft.h"
# include "../lib/printf/ft_printf.h"

# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include <stdbool.h>

typedef struct s_node
{
	int				nbr;
	int				index;
	int				push_cost;
	bool			above_median;
	bool			cheapest;
	struct s_node	*target_node;
	struct s_node	*next;
	struct s_node	*prev;
}	t_node;

//operations
void			swap_a(t_node **stack);
void			swap_b(t_node **stack);
void			swap_a_b(t_node **stacka, t_node **stackb);
void			pa(t_node **fromb, t_node **toa);
void			pb(t_node **froma, t_node **tob);

void			rotate_a(t_node **stack);
void			rotate_b(t_node **stack);
void			rotate_a_b(t_node **stacka, t_node **stackb);

void			rotate_r_a(t_node **stack);
void			rotate_r_b(t_node **stack);
void			rotate_r_a_b(t_node **stacka, t_node **stackb);

//list_func

t_node			*ft_lstnew_new(void *content);
void			ft_lstadd_back_new(t_node **lst, t_node *new);
void			ft_lstadd_front_new(t_node **lst, t_node *new);
t_node			*ft_lstlast_new(t_node *lst);

//a_to_b

void			current_index(t_node *stack);
void			set_target_a(t_node *a, t_node *b);
void			cost_analysis_a(t_node *a, t_node *b);
void			set_cheapest(t_node *stack);
void			init_nodes_a(t_node *a, t_node *b);

//b_to_a

void			init_nodes_b(t_node *a, t_node *b);
void			set_target_b(t_node *a, t_node *b);

//sort_stack

void			sort_stacks(t_node **a, t_node **b);
void			move_a_to_b(t_node **a, t_node **b);
void			move_b_to_a(t_node **a, t_node **b);
void			min_on_top(t_node **a);
void			rotate_both(t_node **a, t_node **b,
					t_node *cheapest_node);
void			rev_rotate_both(t_node **a, t_node **b,
					t_node *cheapest_node);

//helper

void			prep_for_push(t_node **s, t_node *top, char name);
t_node			*get_cheapest(t_node *stack);
t_node			*find_max(t_node *stack);
t_node			*find_min(t_node *stack);

//push_swap
int				stack_size(t_node *stack);
int				list_a_sorted(t_node *stack);
void			sort_three(t_node **stack);
#endif