#include "ft_printf.h"

int ft_puthex_lower(unsigned int n)
{
    int len;

    len = 0;
    if (n >= 16)
        len += ft_put_hex_lower(n / 16);
    len += ft_putchar("0123456789abcdef"[n % 16]);
    return len;
}

int ft_puthex_upper(unsigned int n)
{
    int len;

    len = 0;
    if (n >= 16)
        len += ft_put_hex_upper(n / 16);
    len += ft_putchar("0123456789ABCDEF"[n % 16]);
    return len;
}