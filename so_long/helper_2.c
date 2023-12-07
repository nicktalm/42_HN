/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 20:17:13 by ntalmon           #+#    #+#             */
/*   Updated: 2023/12/07 17:35:57 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	check_z_instances(t_vars *vars)
{
	int	i;
	int	z;

	i = 0;
	z = 0;
	while (vars->image[S]->instances[i].z < vars->image[P]->instances[0].z)
		i++;
	z = vars->image[S]->instances[i].z + 1;
	vars->image[P]->instances[0].z = z;
}

int	count_c(t_vars	*vars)
{
	t_point	size;

	size.x = 0;
	size.y = 0;
	vars->coll_nbr = 0;
	while (vars->map[size.y])
	{
		size.x = 0;
		while (vars->map[size.y][size.x])
		{
			if (vars->map[size.y][size.x] == 'C')
				vars->coll_nbr++;
			size.x++;
		}
		size.y++;
	}
	return (0);
}

void	freearray(char **cpymap)
{
	int	j;

	j = 0;
	while (cpymap[j])
	{
		free(cpymap[j]);
		j++;
	}
	free(cpymap);
	error(8);
}
