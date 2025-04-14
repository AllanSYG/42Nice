/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayag <asayag@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 11:54:55 by asayag            #+#    #+#             */
/*   Updated: 2025/04/14 16:24:33 by asayag           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	is_in_set(char c, const char *set)
{
	while (*set)
		if (c == *set++)
			return (1);
	return (0);
}

void	ft_bounds(const char *s1, const char *set, int *start, int *end)
{
	*start = 0;
	*end = ft_strlen(s1) - 1;
	while (s1[*start] && is_in_set(s1[*start], set))
		(*start)++;
	while (*end > *start && is_in_set(s1[*end], set))
		(*end)--;
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		len;
	char	*trimmed;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	ft_bounds(s1, set, &start, &end);
	if (start > end)
	{
		trimmed = malloc(1);
		if (!trimmed)
			return (NULL);
		trimmed[0] = '\0';
		return (trimmed);
	}
	len = end - start + 1;
	trimmed = malloc(len + 1);
	if (!trimmed)
		return (NULL);
	ft_strlcpy(trimmed, s1 + start, len + 1);
	return (trimmed);
}
