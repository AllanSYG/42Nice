#include <unistd.h>
#include <stdarg.h>
#include "ft_printf.h"

int ft_putchar (char c)
{
    return write(1, &c, 1);
}

int ft_putstr (char *str)
{
    int i;
    
    i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
    return i;
}

int ft_putnbr(int n)
{
    int len;
    
    len = 0;
    if (n == -2147483648)
        return ft_putstr("-2147483648");
    if (n < 0)
    {
        len += ft_putchar('-');
        n = -n;
    }
    if (n >= 10)
        len += ft_putnbr(n / 10);
    len += ft_putchar((n % 10) + '0');
    return len;
}
int ft_put_unsigned(unsigned int n)
{
    int len;
    
    len = 0;
    if (n >= 10)
        len += ft_put_unsigned(n / 10);
    len += ft_putchar((n % 10) + '0');
    return len;
}