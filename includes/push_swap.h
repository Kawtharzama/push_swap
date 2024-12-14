/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabu-zee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 20:41:54 by kabu-zee          #+#    #+#             */
/*   Updated: 2024/09/14 20:41:56 by kabu-zee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>
# include <libft.h>
typedef struct s_list
{
	int				value;
	struct s_list	*next;
} t_list;
// main file
int	main(int argc, char **argv);
void init_stack(t_list **stack_a, char** argv, int argc);
// check_arguments file
void check_arguments(int argc, char **argv);
int duplication(char **str, int num, int i);
 int	ft_isnum(char *num);
 //utiles file
void	print_error(char *msg);
//list file
t_list	*ft_lstnew(int value);
t_list	*ft_lstlast(t_list *head);
void	ft_lstadd_back(t_list **stack, t_list *node);
void	printList(t_list *head);




#endif
