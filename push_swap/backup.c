int	main(int argc, char **argv)
{
	t_list	*list_a;
	t_list	*list_b;
	t_list	*new_node;
	int		i;
	int		*number;

	i = 1;
	list_b = NULL;
	while (i < argc)
	{
		number = (int *)malloc(sizeof(int));
		*number = ft_atoi(argv[i]);
		new_node = ft_lstnew(number);
		if (new_node)
			ft_lstadd_back(&list_a, new_node);
		else
			break ;
		i++;
	}
	// rotate_a(&list_a);
	// pb(&list_a, &list_b);
	// pb(&list_a, &list_b);
	// pb(&list_a, &list_b);
	// swap_a_b(&list_a, &list_b);
	// swap_a(&list_a);
	// rotate_a_b(&list_a ,&list_b);
	// rotate_r_a_b(&list_a ,&list_b);
	// t_list *current = list_a;
	// printf("Liste_A: \n");
	// while (current != NULL)
	// {
	// 	printf("%d\n", *((int *)current->content));
	// 	current = current->next;
	// }
	// printf("\n");
	// t_list *current_2 = list_b;
	// printf("Liste_B: \n");
	// while (current_2 != NULL)
	// {
	// 	printf("%d\n", *((int *)current_2->content));
	// 	current_2 = current_2->next;
	// }
	return (0);
}