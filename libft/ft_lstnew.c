/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:33:47 by ntalmon           #+#    #+#             */
/*   Updated: 2023/10/17 12:27:12 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// returns new node created with 'content'
t_list	*ft_lstnew(void *content)
{
	t_list	*t;

	t = (t_list *)malloc(sizeof(t_list));
	if (t == NULL)
		return (NULL);
	t->content = content;
	t->next = NULL;
	return (t);
}
