/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayag <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 11:42:55 by asayag            #+#    #+#             */
/*   Updated: 2025/04/23 11:42:57 by asayag           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int	handle_pointer(va_list args)
{
	unsigned long	p;
	int				len;

	p = (unsigned long)va_arg(args, unsigned long);
	len = 0;
	if (p == 0)
		return (ft_putstr("(nil)"));
	len += ft_putstr("0x");
	len += ft_puthex_lower_long((unsigned long long)p);
	return (len);
}
