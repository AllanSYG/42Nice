#ifndef LIBFT_H
#define LIBFT_H

typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;


int ft_atoi(const char *str);
void ft_bzero(void *s, unsigned int n);
void *ft_calloc(unsigned int count, unsigned int size);
int ft_isalnum(char a);
int ft_isalpha(char a);
int ft_isascii(int a);
int ft_isdigit(char a);
int ft_isprint(int a);
char *ft_itoa(int n);
void *ft_memchr(const void *s, int c, unsigned int n);
int ft_memcmp(const void *s1, const void *s2, unsigned int n);
void *ft_memcpy(void *destination, const void *source, unsigned int n);
void *ft_memmove(void *dest, const void *src, unsigned int n);
void *ft_memset(void *s, int value, unsigned int n);
void ft_putchar_fd(char c, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);
void ft_putstr_fd(char *s, int fd);
char **ft_split(char const *s, char c);
char *ft_strchr(const char *s, int c);
char *ft_strdup(const char *s1);
void ft_striteri(char *s, void (*f)(unsigned int, char*));
char *ft_strjoin(char const *s1, char const *s2);
int ft_strlcat(char *dst, const char *src, unsigned int size);
int ft_strlcpy(char *dst, const char *src, unsigned int size);
unsigned int ft_strlen(const char *a);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
int ft_strncmp(const char *s1, const char *s2, int n);
char *ft_strnstr(const char *haystack, const char *needle, unsigned int len);
char *ft_strrchr(const char *s, int c);
char *ft_strtrim(char const *s1, char const *set);
char *ft_substr(const char *s, unsigned int start, unsigned int len);
int ft_tolower(int a);
int ft_toupper(int a);

#endif