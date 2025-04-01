/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 16:47:22 by marvin            #+#    #+#             */
/*   Updated: 2025/04/01 16:47:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlcat (char *dst, const char *src, int size)
{
    int i;
    int j;
    int dst_len;
    int src_len;

    i = 0;
    j = 0;
    dst_len = 0;
    src_len = 0;
    while (dst[dst_len])
        dst_len++;
    while (src[src_len])
        src_len++;
    if (size <= dst_len)
        return (size + src_len);
    while (src[j] && j < size - dst_len - 1)
    {
        dst[dst_len + j] = src[j];
        j++;
    }
    dst[dst_len + j] = '\0';
    return (dst_len + src_len);
}