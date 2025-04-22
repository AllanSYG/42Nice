/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayag <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 12:59:26 by asayag            #+#    #+#             */
/*   Updated: 2025/04/16 12:59:28 by asayag           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include <stdarg.h>
#include <unistd.h>

int handle(const char *format, va_list args)
{
    if (*format == 'c')
        return handle_char(args);
    else if (*format == 's')
        return handle_string(args);
    else if (*format == 'd' || *format == 'i')
        return handle_decimal(args);
    else if (*format == 'u')
        return handle_unsigned(args);
    else if (*format == 'x')
        return handle_hex(args, 0);
    else if (*format == 'X')
        return handle_hex(args, 1);
    else if (*format == 'p')
        return handle_pointer(args);
    else if (*format == '%')
        return ft_putchar('%');
    return 0;
}

int ft_printf(const char *format, ...)
{
    va_list args;
    int count;

    count = 0;
    va_start(args, format);
    while (*format)
    {
        if (*format == '%' && *(format + 1) != '\0')
        {
            format++;
            count += handle(format, args);
        }
        else
        {
            count += ft_putchar(*format);
        }
        format++;
    }
    va_end(args);
    return count;
}
