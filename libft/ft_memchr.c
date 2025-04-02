void *ft_memchr(const void *s, int c, unsigned int n)
{
    unsigned int i;
    unsigned char *str;

    str = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        if (str[i] == (unsigned char)c)
            return ((void *)&str[i]);
        i++;
    }
    return (NULL);
}
