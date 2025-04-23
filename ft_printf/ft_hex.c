/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayag <asayag@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 11:28:50 by asayag            #+#    #+#             */
/*   Updated: 2025/04/23 11:48:20 by asayag           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_lower(unsigned int n)
{
	int	len;

	len = 0;
	if (n >= 16)
		len += ft_puthex_lower(n / 16);
	len += ft_putchar("0123456789abcdef"[n % 16]);
	return (len);
}

int	ft_puthex_upper(unsigned int n)
{
	int	len;

	len = 0;
	if (n >= 16)
		len += ft_puthex_upper(n / 16);
	len += ft_putchar("0123456789ABCDEF"[n % 16]);
	return (len);
}

int	ft_puthex_lower_long(unsigned long long n)
{
	int	len;

	len = 0;
	if (n >= 16)
		len += ft_puthex_lower_long(n / 16);
	len += ft_putchar("0123456789abcdef"[n % 16]);
	return (len);
}
