/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chack_argv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabu-zee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 09:37:32 by kabu-zee          #+#    #+#             */
/*   Updated: 2024/12/14 09:37:38 by kabu-zee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

int duplication(char **str, int num, int i)
{
	while(str[i])
	{
		if(ft_atoi(str[i]) == num)
			return 1;
		i++;
	}
	return 0;
}

int	ft_isnum(char *num)
{
	int	i;

	i = 0;
	if (num[0] == '-')
		i++;
	while (num[i])
	{
		if (!ft_isdigit(num[i]))
			return (0);
		i++;
	}
	return (1);
}
void check_arguments(int argc ,char **argv)
{
	int i;
	long	tmp;
	char **tmp_argv;
	i = 0;
	
	if (argc == 2)
		tmp_argv = ft_split(argv[1], ' ');
	else
	{	
		i =1;
		tmp_argv = argv;
	}
	while(tmp_argv[i])
	{
		tmp = ft_atol(tmp_argv[i]);
		if (!ft_isnum(tmp_argv[i]))
			print_error("Error");
		if (duplication(tmp_argv,tmp,i+1))
			print_error("Error");
		if (tmp < -2147483648 || tmp > 2147483647)
			print_error("Error");
		i++;		
	}
	
}
