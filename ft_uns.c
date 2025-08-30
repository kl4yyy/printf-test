/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uns.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnajem <mnajem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 17:46:48 by mnajem            #+#    #+#             */
/*   Updated: 2025/08/26 19:11:51 by mnajem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_uns(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 10)
	{
		count += ft_uns(n / 10);
		count += ft_uns(n % 10);
	}
	else
		count += ft_putchar(n + '0');
	return (count);
}
