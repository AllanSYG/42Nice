/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayag <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 12:57:00 by asayag            #+#    #+#             */
/*   Updated: 2025/04/16 12:57:31 by asayag           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdlib.h>
#include <unistd.h>

static char *append_to_buffer(char *buffer, char *temp)
{
    char    *new_buffer;
    
    if (!buffer)
    {
        buffer = ft_strjoin("", temp);
        if (!buffer)
            return (NULL);
    }
    else
    {
        new_buffer = ft_strjoin(buffer, temp);
        free(buffer);
        if (!new_buffer)
            return (NULL);
        buffer = new_buffer;
    }
    return (buffer);
}

static char *read_to_buffer(int fd, char *buffer)
{
    char    *temp;
    ssize_t bytes_read;

    temp = malloc((BUFFER_SIZE + 1) * sizeof(char));
    if (!temp)
        return (NULL);
    
    bytes_read = 1;
    while (bytes_read > 0)
    {
        bytes_read = read(fd, temp, BUFFER_SIZE);
        if (bytes_read < 0)
        {
            free(temp);
            return (NULL);
        }
        temp[bytes_read] = '\0';
        buffer = append_to_buffer(buffer, temp);
        if (!buffer)
        {
            free(temp);
            return (NULL);
        }
    }
    free(temp);
    return (buffer);
}

static char *extract_line(char *buffer)
{
    char    *line;
    size_t  len;

    if (!buffer || !*buffer)
        return (NULL);
    
    len = 0;
    while (buffer[len] && buffer[len] != '\n')
        len++;
    
    line = malloc((len + 2) * sizeof(char));  // +2 to include '\n' and '\0'
    if (!line)
        return (NULL);
    
    ft_strlcpy(line, buffer, len + 2);  // Copy the line including '\n'
    return (line);
}

static char *update_buffer(char *buffer)
{
    char    *new_buffer;
    size_t  i;

    i = 0;
    while (buffer[i] && buffer[i] != '\n')
        i++;
    
    if (buffer[i] == '\0')  // No newline found
    {
        free(buffer);
        return (NULL);
    }
    
    if (buffer[++i] == '\0')  // Only newline found, no data left
    {
        free(buffer);
        return (NULL);
    }
    
    new_buffer = malloc(ft_strlen(buffer + i) + 1);
    if (!new_buffer)
    {
        free(buffer);
        return (NULL);
    }
    
    ft_strlcpy(new_buffer, buffer + i, ft_strlen(buffer + i) + 1);
    free(buffer);
    return (new_buffer);
}

char *get_next_line(int fd)
{
    static char *buffer;
    char        *line;

    if (fd < 0 || BUFFER_SIZE <= 0)
        return (NULL);
    buffer = read_to_buffer(fd, buffer);
    if (!buffer || buffer[0] == '\0')
    {
        free(buffer);
        buffer = NULL;
        return (NULL);
    }
    
    line = extract_line(buffer);
    if (!line)
    {
        free(buffer);
        buffer = NULL;
        return (NULL);
    }

    buffer = update_buffer(buffer);
    return (line);
}

