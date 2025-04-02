#include <stddef.h>

char *ft_strrchr(const char *s, int c)
{
    int i = 0;
    const char *last_occurrence = NULL;

    while (s[i] != '\0')
    {
        if (s[i] == (char)c)
            last_occurrence = &s[i];
        i++;
    }

    if (c == '\0')
        return ((char *)&s[i]);

    return ((char *)last_occurrence);
}
