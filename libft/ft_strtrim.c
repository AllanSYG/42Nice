/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayag <asayag@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 11:54:55 by asayag            #+#    #+#             */
/*   Updated: 2025/04/09 12:46:46 by asayag           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	is_in_set(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

void	ft_bounds(const char *s1, const char *set, int *start, int *end)
{
	*start = 0;
	*end = ft_strlen((char *)s1) - 1;
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
	int		i;
	char	*trimmed;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	ft_bounds(s1, set, &start, &end);
	len = end - start + 1;
	trimmed = malloc(sizeof(char) * (len + 1));
	if (!trimmed)
		return (NULL);
	while (i < len)
	{
		trimmed[i] = s1[start + i];
		i++;
	}
	trimmed[len] = '\0';
	return (trimmed);
}
