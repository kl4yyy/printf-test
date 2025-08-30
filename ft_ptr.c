/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnajem <mnajem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 18:18:46 by mnajem            #+#    #+#             */
/*   Updated: 2025/08/27 18:22:48 by mnajem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_xx(unsigned long n)
{
	int		count;
	char	*b;

	b = "0123456789abcdef";
	count = 0;
	if (n >= 16)
		count += ft_xx(n / 16);
	count += ft_putchar(b[n % 16]);
	return (count);
}

int	ft_ptr(unsigned long n)
{
	int	count;

	count = 0;
	if (!n)
	{
		count += ft_putstr("(nil)");
		return (count);
	}
	count += ft_putstr("0x");
	count += ft_xx(n);
	return (count);
}
