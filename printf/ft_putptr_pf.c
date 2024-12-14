/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabu-zee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 19:41:32 by kabu-zee          #+#    #+#             */
/*   Updated: 2024/09/14 19:41:34 by kabu-zee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr_pf(void *ptr, size_t *counter)
{
	unsigned long	tmp;

	tmp = (unsigned long)ptr;
	if (!tmp)
	{
		ft_putstr_pf ("(nil)", counter);
		return ;
	}
	ft_putstr_pf ("0x", counter);
	ft_puthex_pf (tmp, counter, 0);
}
