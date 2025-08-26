/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnajem <mnajem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 22:22:35 by mnajem            #+#    #+#             */
/*   Updated: 2025/08/25 22:23:25 by mnajem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr(int n)
{
    int count;
    count = 0;
    
	if (n >= 10)
	{
		count += ft_putnbr(n / 10);
		count += ft_putnbr(n % 10);
	}
	else
		count += ft_putchar(n + '0');
    return (count);
}