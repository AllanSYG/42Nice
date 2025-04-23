/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayag <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 11:41:38 by asayag            #+#    #+#             */
/*   Updated: 2025/04/23 11:41:46 by asayag           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int	handle_char(va_list args)
{
	char	c;

	c = va_arg(args, int);
	return (ft_putchar(c));
}

int	handle_string(va_list args)
{
	char	*str;

	str = va_arg(args, char *);
	if (str == NULL)
		return (ft_putstr("(null)"));
	return (ft_putstr(str));
}

int	handle_decimal(va_list args)
{
	int	d;

	d = va_arg(args, int);
	return (ft_putnbr(d));
}

int	handle_unsigned(va_list args)
{
	unsigned int	u;

	u = va_arg(args, unsigned int);
	return (ft_put_unsigned(u));
}

int	handle_hex(va_list args, int upper)
{
	unsigned int	x;

	x = va_arg(args, unsigned int);
	if (upper)
		return (ft_puthex_upper(x));
	return (ft_puthex_lower(x));
}
