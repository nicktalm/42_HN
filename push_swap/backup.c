t_node	*parsing(t_node	*list_a, int argc, char **argv)
{
	int		i;
	int		*number;
	char	**string;
	int		j;
	t_node	*new_node;

	i = 0;
	while (i < argc)
	{
		string = ft_split(argv[i], ' ');
		i++;
		while (string[j] != NULL)
		{
			number = (int *)malloc(sizeof(int));
			*number = ft_atoi(string[j]);
			new_node = ft_lstnew_new(number);
			if (new_node)
				ft_lstadd_back_new(&list_a, new_node);
			else
				break ;
			j++;
		}
		j = 0;
	}
	return (list_a);
}