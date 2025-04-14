/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayag <asayag@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 11:38:19 by asayag            #+#    #+#             */
/*   Updated: 2025/03/31 11:47:44 by asayag           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, unsigned int n)
{
	unsigned char		*d;
	const unsigned char	*s;
	unsigned int		i;

	d = dest;
	s = src;
	i = 0;
	if (d < s || d >= s + n)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		i = n - 1;
		while (i != (unsigned int)-1)
		{
			d[i] = s[i];
			i--;
		}
	}
	return (dest);
}
