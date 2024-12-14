/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabu-zee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 19:27:49 by kabu-zee          #+#    #+#             */
/*   Updated: 2024/09/14 19:27:50 by kabu-zee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_format( va_list va, char *str, size_t *counter)
{
	if (*str == 'c')
		ft_putchar_pf(va_arg(va, int), counter);
	else if (*str == 's')
		ft_putstr_pf(va_arg(va, char *), counter);
	else if (*str == 'p')
		ft_putptr_pf(va_arg(va, void *), counter);
	else if (*str == 'i' || *str == 'd')
		ft_putnbr_pf(va_arg(va, int), counter);
	else if (*str == 'u')
		ft_putunit_pf(va_arg(va, unsigned int), counter);
	else if (*str == 'X')
		ft_puthex_pf(va_arg(va, unsigned int), counter, 1);
	else if (*str == 'x')
		ft_puthex_pf(va_arg(va, unsigned int), counter, 0);
	else if (*str == '%')
		ft_putchar_pf(*str, counter);
}

int	ft_printf(const char *format, ...)
{
	va_list	va;
	size_t	counter;

	if (!format)
		return (0);
	counter = 0;
	va_start (va, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			ft_format(va, (char *) format, &counter);
		}
		else
			ft_putchar_pf (*format, &counter);
		format++;
	}
	va_end(va);
	return (counter);
}
