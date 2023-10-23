/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:04:04 by ntalmon           #+#    #+#             */
/*   Updated: 2023/10/23 14:53:28 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_element;
	void	*current;

	new_list = NULL;
	new_element = NULL;
	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	while (lst != NULL)
	{
		current = f(lst->content);
		new_element = ft_lstnew(current);
		if (new_element == NULL)
		{
			del(current);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_element);
		lst = lst->next;
	}
	return (new_list);
}
