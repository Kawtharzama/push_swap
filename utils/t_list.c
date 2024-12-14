/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabu-zee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 09:37:15 by kabu-zee          #+#    #+#             */
/*   Updated: 2024/12/14 09:37:17 by kabu-zee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstnew(int value)
{
    t_list *new_node;

    new_node = (t_list *)malloc(sizeof(t_list));
    if(!new_node)
        return NULL;
    new_node-> value =  value;
    new_node->next = NULL;
    return (new_node);   
}

t_list	*ft_lstlast(t_list *head)
{
    t_list *tmp;

	tmp = head;
	while (tmp && tmp->next)
	{
		tmp = tmp->next;
	}
	return (tmp);
}
void	ft_lstadd_back(t_list **stack, t_list *node)
{
    t_list *tmp;

    if (*stack)
    {
        tmp = ft_lstlast(*stack);  
        tmp->next = node; 
        node->next = NULL;
    }
    else
    {
        *stack = node;
        (*stack)->next = NULL;
    }
}
void	printList(t_list *head)
{
	t_list	*tmp;

	tmp = head;
	while (tmp != NULL)
	{
		ft_putnbr_fd(tmp->value, 1);
		tmp = tmp->next;
	}
}