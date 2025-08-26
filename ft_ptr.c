/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnajem <mnajem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 18:18:46 by mnajem            #+#    #+#             */
/*   Updated: 2025/08/26 22:47:11 by mnajem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_xx(unsigned int n)
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

int ft_ptr(unsigned long n)
{
    int count;
    count = 0;
    if (!n)
    {
        count += ft_putstr("(nil)");
        return (count);
    }
    count += ft_putstr("0x");
    if (n == 0)
        return (count + ft_putchar('0'));
    count += ft_xx(n);
    return (count);
}