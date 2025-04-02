#include <stddef.h>

char *ft_strdup(const char *s1)
{
    int i;
    char *str;

    i = 0;
    while (s1[i])
        i++;
    str = malloc(i + 1);
    if (!str)
        return (NULL);
    i = 0;
    while (s1[i])
    {
        str[i] = s1[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}