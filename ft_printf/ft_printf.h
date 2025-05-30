/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayag <asayag@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 11:39:47 by asayag            #+#    #+#             */
/*   Updated: 2025/04/23 11:40:17 by asayag           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(int n);
int	ft_put_unsigned(unsigned int n);
int	ft_puthex_lower(unsigned int n);
int	ft_puthex_lower_long(unsigned long long n);
int	ft_puthex_upper(unsigned int n);
int	handle_char(va_list args);
int	handle_string(va_list args);
int	handle_decimal(va_list args);
int	handle_unsigned(va_list args);
int	handle_hex(va_list args, int upper);
int	handle_pointer(va_list args);
int	handle(const char *format, va_list args);

#endif
