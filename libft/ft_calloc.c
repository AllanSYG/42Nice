/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayag <asayag@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 11:41:31 by asayag            #+#    #+#             */
/*   Updated: 2025/04/14 14:39:50 by asayag           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stddef.h>
#include <limits.h>

void	*ft_calloc(unsigned int count, size_t size)
{
	unsigned char	*ptr;
	size_t			total_size;

	if (count > 0 && size > UINT_MAX / count)
		return (NULL);
	total_size = count * size;
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, total_size);
	return ((void *)ptr);
}
