/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabu-zee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 19:41:32 by kabu-zee          #+#    #+#             */
/*   Updated: 2024/09/14 19:41:34 by kabu-zee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_pf(int n, size_t *counter)
{
	if (n == -2147483648)
		ft_putstr_pf("-2147483648", counter);
	else
	{
		if (n < 0)
		{
			n = -n;
			ft_putchar_pf('-', counter);
		}
		if (n >= 10)
			ft_putnbr_pf(n / 10, counter);
		ft_putchar_pf(n % 10 + '0', counter);
	}
}
/*int main(void)
{
    size_t counter;

      counter = 0;
    printf("Output: ");
    ft_putnbr_pf(-1234, &counter);
    printf("\nCounter: %zu\n", counter);

    counter = 0;
    printf("Output: ");
    ft_putnbr_pf(0, &counter);
    printf("\nCounter: %zu\n", counter);

    counter = 0;
    printf("Output: ");
    ft_putnbr_pf(-2147483648, &counter);
    printf("\nCounter: %zu\n", counter);

    return 0;
}
*/
