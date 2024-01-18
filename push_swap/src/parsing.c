/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 16:04:04 by ntalmon           #+#    #+#             */
/*   Updated: 2024/01/18 16:31:09 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

char	**parsing2(int argc, char **argv)
{
	int		i;
	int		j;
	char	**string;
	char	**split_result;
	int		nbr;
	int		x;

	i = 1;
	j = 0;
	x = 0;
	nbr = count_nbr(argc, argv);
	string = malloc((nbr + 1) * sizeof(char *));
	string[nbr] = NULL;
	while (i < argc)
	{
		split_result = ft_split(argv[i], ' ');
		x = 0;
		while (split_result[x] != NULL)
		{
			string[j] = ft_strdup(split_result[x]);
			j++;
			x++;
		}
		i++;
		free_string(split_result);
	}
	check_list (string);
	return (string);
}

void	check_spaces(char **argv)
{
	int	i;
	int	j;
	int	c;

	j = 1;
	c = 0;
	while (argv[j])
	{
		i = 0;
		while (argv[j][i] != '\0')
		{
			if (argv[j][i] == ' ' || argv[j][i] == '\t' || argv[j][i] == '\n'
				|| argv[j][i] == '\v' || argv[j][i] == '\f'
				|| argv[j][i] == '\r')
				c++;
			i++;
		}
		if (i == 0 || i == c)
			error ();
		j++;
	}
}

void	free_string(char **string)
{
	int	j;

	j = 0;
	while (string[j])
	{
		free(string[j]);
		j++;
	}
	free(string);
}

t_node	*parsing(t_node *list_a, int argc, char **argv)
{
	int		*number;
	char	**string;
	int		j;
	t_node	*new_node;

	j = 0;
	check_spaces(argv);
	string = parsing2(argc, argv);
	while (string[j] != NULL)
	{
		number = (int *)malloc(sizeof(int));
		*number = ft_atoi(string[j]);
		new_node = ft_lstnew_new(number);
		free(number);
		if (new_node)
			ft_lstadd_back_new(&list_a, new_node);
		else
			break ;
		j++;
	}
	free_string(string);
	return (list_a);
}
