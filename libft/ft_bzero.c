/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayag <asayag@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 11:26:38 by asayag            #+#    #+#             */
/*   Updated: 2025/04/14 14:39:17 by asayag           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, unsigned int n)
{
	unsigned int		i;
	unsigned char		*ptr;

	i = 0;
	ptr = s;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}
