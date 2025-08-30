/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_x.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnajem <mnajem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 18:03:49 by mnajem            #+#    #+#             */
/*   Updated: 2025/08/27 18:26:32 by mnajem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_x(unsigned int n, char a)
{
	int		count;
	char	*b;

	if (a == 'x')
		b = "0123456789abcdef";
	else
		b = "0123456789ABCDEF";
	count = 0;
	if (n >= 16)
		count += ft_x(n / 16, a);
	count += ft_putchar(b[n % 16]);
	return (count);
}
