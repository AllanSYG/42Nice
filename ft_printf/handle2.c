#include "ft_printf.h"

int handle_pointer(va_list args)
{
    unsigned long long p;
    int len;

    p = va_arg(args, unsigned long long);
    len = 0;
    if (p == 0)
        return ft_putstr("0x0");
    len += ft_putstr("0x");
    len += ft_put_hex_lower(p);
    return len;
}