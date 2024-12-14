/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunit_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabu-zee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 19:41:32 by kabu-zee          #+#    #+#             */
/*   Updated: 2024/09/14 19:41:34 by kabu-zee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunit_pf(unsigned int n, size_t *counter)
{
	if (n >= 10)
	{
		ft_putnbr_pf (n / 10, counter);
	}
	ft_putchar_pf (n % 10 + '0', counter);
}
