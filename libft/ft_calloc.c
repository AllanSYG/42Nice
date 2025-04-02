#include <stddef.h>

void	*ft_calloc(unsigned int count, unsigned int size)
{
    unsigned char	*ptr;
    unsigned int	total_size;
    unsigned int	i;

    total_size = count * size;
    ptr = malloc(total_size);
    if (!ptr)
        return (NULL);
    i = 0;
    while (i < total_size)
    {
        ptr[i] = 0;
        i++;
    }
    return ((void *)ptr);
}