/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 21:22:42 by mintan            #+#    #+#             */
/*   Updated: 2024/05/20 20:57:46 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description: appends up to (size - 1 - len(dst)) characters from source to
   destination. The destination string is always null terminated if size > 0.
   Returns the length of the src string to detect truncation:
	- provided size < src length */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = ft_strlen(dst);
	if (size <= i)
		return (ft_strlen(src) + ft_strlen(dst));
	while (*src != '\0' && i < size -1)
	{
		dst[i] = *src;
		i++;
		src++;
	}
	dst[i] = '\0';
	return (ft_strlen(src) + ft_strlen(dst));
}
