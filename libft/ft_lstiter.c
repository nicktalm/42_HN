/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 10:53:12 by ntalmon           #+#    #+#             */
/*   Updated: 2023/10/23 11:12:34 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*c;

	c = lst;
	if (lst == NULL || f == NULL)
		return ;
	while (c != NULL)
	{
		f(c->content);
		c = c->next;
	}
}
