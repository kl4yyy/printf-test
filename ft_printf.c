/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnajem <mnajem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 10:41:17 by mnajem            #+#    #+#             */
/*   Updated: 2025/08/26 22:45:23 by mnajem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int ft_selc(char c , va_list args)
{
    int	count;

	count = 0;
	if (c == 'c')
    count += ft_putchar(va_arg(args, int));
	if (c == 's')
    count += ft_putstr(va_arg(args, char *));
	if (c == 'd' || c == 'i')
    count += ft_putnbr(va_arg(args, int));
	if (c == 'u')
    count += ft_uns(va_arg(args,unsigned int));
	if (c == 'p')
    count += ft_ptr(va_arg(args, unsigned long));
	if (c == 'x' || c == 'X')
    count += ft_x(va_arg(args, unsigned int), c);
	if (c == '%')
	{
		write(1, "%", 1);
		count++;
	}
	return (count);
}

int ft_printf(const char *s, ...)
{
    va_list args;
    int count;
    int i;

    count = 0;
    i = 0;
    if (s == NULL)
        return (-1);
    va_start(args,s);
    while(s[i])
    {
        if(s[i]=='%' && s[++i] != '\0')
            count+= ft_selc(s[++i],args);
        else
            count+=ft_putchar(s[i]);
        i++;
    }
    va_end(args);
    return (count);
}
