/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:22:05 by ntalmon           #+#    #+#             */
/*   Updated: 2023/12/07 17:36:42 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include <stdio.h>

int	error_characters(int *e, int *c, int *p)
{
	if (*e != 1)
		ft_printf("Error:\nThe map must contain exactly 1 exit E!\n");
	if (*c <= 0)
		ft_printf("Error:\nThe map must contain at least 1 collectible C!\n");
	if (*p != 1)
		ft_printf("Error:\nThe map must contain 1 starting position P!\n");
	exit (0);
}

int	error(int i)
{
	if (i == 1)
		ft_printf("Error:\nThe map must be rectangular!\n");
	if (i == 2)
		ft_printf("Error:\nThe map must be closed/surrounded by walls!\n");
	if (i == 3)
		ft_printf("Error:\nNo Valid Path!\n");
	if (i == 4)
		ft_printf("Error:\nWrong file type, it must be a .ber file!\n");
	if (i == 5)
		ft_printf("Error:\nExactly 1 argument is required!\n");
	if (i == 6)
		ft_printf("Error:\nNon-valid character inside the map!\n");
	if (i == 7)
		ft_printf("Error:\nMap file is empty!\n");
	if (i == 8)
		ft_printf("Error:\nAllocation fails in dupmap!\n");
	exit (0);
}

void	exit_and_collectible(t_vars *vars)
{
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
	if (vars->mlx)
		mlx_terminate(vars->mlx);
	exit (0);
}

// ft_printf(GREEN"\n\
// ██████████████████████████████████████████████████████████████████\n\
// ██                                                              ██\n\
// ██  ███  ███  ██████  ██    ██     ██      ██ ██ ██    ██   ██  ██\n\
// ██   ██  ██  ██    ██ ██    ██     ██      ██ ██ ███   ██   ██  ██\n\
// ██    ████   █      █ ██    ██     ██  ██  ██ ██ ██ ██ ██   ██  ██\n\
// ██     ██    ██    ██ ██    ██     ██ ████ ██ ██ ██  ████       ██\n\
// ██     ██     ██████    ████        ███  ███  ██ ██   ███   ██  ██\n\
// ██                                                              ██\n\
// ██████████████████████████████████████████████████████████████████\n\
// 		");