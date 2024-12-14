/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabu-zee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 12:20:53 by kabu-zee          #+#    #+#             */
/*   Updated: 2024/09/20 12:20:54 by kabu-zee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex_pf(unsigned long num, size_t *counter, int uppercase)
{
	char	*base;

	if (uppercase)
		base = HEX_UPP_BASE;
	else
		base = HEX_LOW_BASE;
	if (num >= 16)
	{
		ft_puthex_pf(num / 16, counter, uppercase);
	}
	ft_putchar_pf(base[num % 16], counter);
}
/*int main(void)
{
    size_t counter;

    counter = 0;
    printf("Hexadecimal (uppercase): ");
    ft_puthex_pf(255, &counter, 1);
    printf("\nCounter: %zu\n", counter);

    counter = 0;
    printf("Hexadecimal (lowercase): ");
    ft_puthex_pf(255, &counter, 0);
    printf("\nCounter: %zu\n", counter);

    return 0;
}
*/
