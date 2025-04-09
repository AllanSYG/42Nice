/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayag <asayag@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 11:32:48 by asayag            #+#    #+#             */
/*   Updated: 2025/03/31 11:37:21 by asayag           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *destination, const void *source, unsigned int n)
{
	unsigned char		*d;
	const unsigned char	*s;
	unsigned int		i;

	d = destination;
	s = source;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (destination);
}
