/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayag <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 11:55:08 by asayag            #+#    #+#             */
/*   Updated: 2025/04/09 11:55:09 by asayag           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlcpy(char *dst, const char *src, int size)
{
	int	i = 0;
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

void	free_result(char **result, int last)
{
	while (--last >= 0)
		free(result[last]);
	free(result);
}

char	*allocate_word(const char *s, int start, int end)
{
	char	*word;

	word = (char *)malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	ft_strlcpy(word, s + start, end - start + 1);
	return (word);
}

int	fill_words(char **result, const char *s, char c)
{
	int	i = 0, j, k = 0;

	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
		{
			j = i;
			while (s[j] && s[j] != c)
				j++;
			result[k] = allocate_word(s, i, j);
			if (!result[k])
				return (free_result(result, k), -1);
			k++;
			i = j;
		}
		else
			i++;
	}
	result[k] = NULL;
	return (0);
}

int	count_words(const char *s, char c)
{
	int	count = 0, in_word = 0;

	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		word_count;

	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	result = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	if (fill_words(result, s, c) == -1)
		return (NULL);
	return (result);
}
