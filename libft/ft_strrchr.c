/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayag <asayag@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 11:44:32 by asayag            #+#    #+#             */
/*   Updated: 2025/04/09 11:48:08 by asayag           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*last_occurrence = NULL;

	i = 0;
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
