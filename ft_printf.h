/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnajem <mnajem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 20:40:34 by mnajem            #+#    #+#             */
/*   Updated: 2025/08/25 23:27:35 by mnajem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

size_t	ft_strlen(const char *s);
int     ft_putchar(char c);
int	    ft_putstr(char *s);
int     ft_printf(const char *, ...);
int	    ft_x(unsigned int n, int a);
int     ft_uns(unsigned int n);
int     ft_putnbr(int n);
int     ft_ptr(unsigned long n);

#endif
