/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayag <asayag@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 11:45:26 by asayag            #+#    #+#             */
/*   Updated: 2025/04/23 11:45:35 by asayag           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

unsigned int	ft_strlen(const char *s);
char			*ft_strchr(const char *s, int c);
char			*ft_strjoin(char const *s1, char const *s2);
int				ft_strlcpy(char *dst, const char *src, unsigned int size);
char			*ft_strdup(const char *s1);
char			*get_next_line(int fd);

#endif
