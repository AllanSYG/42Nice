#include "ft_printf.h"
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

int handle_pointer(va_list args)
{
    unsigned long p;
    int len;

    p = (unsigned long)va_arg(args, unsigned long);
    len = 0;
    if (p == 0)
        return ft_putstr("(nil)");
    len += ft_putstr("0x");
    len += ft_puthex_lower_long((unsigned long long)p);
    return len;
}