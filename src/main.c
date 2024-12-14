/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabu-zee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 09:37:15 by kabu-zee          #+#    #+#             */
/*   Updated: 2024/12/14 16:27:29 by kabu-zee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"
 	
void init_stack(t_list **stack_a, char** argv, int argc)
{
	int i;
	char **tmp_argv;
	t_list *node;

	i = 0;

	if (argc == 2)
		tmp_argv = ft_split(argv[1], ' ');
	else
	{	
		i =1;
		tmp_argv = argv;
	}
	while(i < argc)
	{
		node = ft_lstnew(ft_atoi(tmp_argv[i]));
		ft_lstadd_back(stack_a, node);
		i++;
		
	}
}


int	main(int argc, char **argv)
{
	t_list	*stack_a;
	//t_list	*stack_b;
	if (argc < 2)
		return -1;
	check_arguments(argc, argv);
	stack_a = NULL;
	//stack_b = NULL;
	init_stack(&stack_a, argv, argc);
	printList(stack_a);
	
	
	
	return (0);

}
