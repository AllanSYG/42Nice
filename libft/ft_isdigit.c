/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayag <asayag@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 09:20:37 by asayag            #+#    #+#             */
/*   Updated: 2025/03/31 09:22:38 by asayag           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int a)
{
	if (a >= 48 && a <= 57)
		return (a);
	return (0);
}
