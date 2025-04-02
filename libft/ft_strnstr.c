#include <stddef.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    if (!*needle)
        return ((char *)haystack);
    for (i = 0; haystack[i] && i < len; i++)
    {
        j = 0;
        while (haystack[i + j] == needle[j] && (i + j) < len)
        {
            if (!needle[j + 1])
                return ((char *)&haystack[i]);
            j++;
        }
    }
    return (NULL);
}