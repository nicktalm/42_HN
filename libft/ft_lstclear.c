/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 10:46:22 by ntalmon           #+#    #+#             */
/*   Updated: 2023/10/23 18:00:07 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*c;
	t_list	*next;

	if (lst == NULL || del == NULL || *lst == NULL)
		return ;
	c = *lst;
	while (c != NULL)
	{
		next = c->next;
		del(c->content);
		free(c);
		c = next;
	}
	*lst = NULL;
}

// void	ft_lstclear(t_list **lst, void (*del)(void *))
// {
// 	t_list	*c;
// 	t_list	*next;

// 	if (lst == NULL || del == NULL)
// 		return ;
// 	c = *lst;
// 	while (c != NULL)
// 	{
// 		next = c->next;
// 		del(c->content);
// 		free(c);
// 		c = next;
// 	}
// 	*lst = NULL;
// }