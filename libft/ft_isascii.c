/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayag <asayag@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 09:40:34 by asayag            #+#    #+#             */
/*   Updated: 2025/03/31 09:40:34 by asayag           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(char a)
{
	if (a >= 0 && a <= 127)
		return (1);
	return (0);
}
