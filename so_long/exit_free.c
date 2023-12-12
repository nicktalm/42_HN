/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_free.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 13:58:57 by ntalmon           #+#    #+#             */
/*   Updated: 2023/12/12 15:49:37 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	exit_and_collectible(t_vars *vars)
{
	char	*moves;

	if (vars->map[vars->p_h][vars->p_w] == 'E')
	{
		vars->steps++;
		if (vars->coll_nbr == 0)
		{
			mlx_close_window(vars->mlx);
			ft_printf("\nCongrats, you won with %i moves!\n\n", vars->steps);
			exit_and_free(vars);
		}
	}
	if (vars->map[vars->p_h][vars->p_w] == 'C')
	{
		mlx_image_to_window(vars->mlx, vars->image[S],
			vars->p_w * 32, vars->p_h * 32);
		vars->map[vars->p_h][vars->p_w] = '0';
		check_z_instances(vars);
	}
	vars->steps++;
	ft_printf("move: %d\n", vars->steps);
	moves = ft_itoa(vars->steps);
	mlx_image_to_window(vars->mlx, vars->image[W], 128, 0);
	mlx_image_to_window(vars->mlx, vars->image[W], 160, 0);
	mlx_put_string(vars->mlx, moves, 140, 0);
	free (moves);
}

void	exit_and_free(t_vars *vars)
{
	int		h;
	t_point	size;

	h = 0;
	while (h < size.y && vars->map[h])
	{
		free(vars->map[h]);
		h++;
	}
	free(vars->map);
	h = 0;
	while (h < TEXTURES)
	{
		if (vars->textures[h])
			mlx_delete_texture(vars->textures[h]);
		h++;
	}
	mlx_terminate(vars->mlx);
	exit (0);
}

void	free_map(char **map)
{
	int		h;

	h = 0;
	while (map[h])
	{
		free(map[h]);
		h++;
	}
	free(map);
}
