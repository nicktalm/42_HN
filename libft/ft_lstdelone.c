/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 10:41:28 by ntalmon           #+#    #+#             */
/*   Updated: 2023/10/23 17:58:13 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	ft_lstdelone(t_list *lst, void (*del)(void *))
// {
	// void	*last_malloc;

	// if (lst == NULL)
	// 	return ;
	// if (del != NULL && lst->content != NULL)
	// {
	// 	del(lst->content);
	// 	lst->content = NULL;
	// }
	// if (lst == last_malloc)
	// {
	// 	free(lst);
	// 	last_malloc = NULL;
	// }
// }

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL)
		return ;
	del(lst->content);
	free(lst);
}
