/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayag <asayag@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 16:21:59 by marvin            #+#    #+#             */
/*   Updated: 2025/04/01 16:21:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlcpy(char *dst, const char *src, int size)
{
    int i;

    i = 0;
    if (size == 0)
        return (0);
    while (src[i] && i < size - 1)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (i);
}