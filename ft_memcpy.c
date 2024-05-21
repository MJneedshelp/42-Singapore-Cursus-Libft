/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 21:13:34 by mintan            #+#    #+#             */
/*   Updated: 2024/05/21 14:48:34 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description: copies n bytes from memory area src to memory area dest. Memory
   must not overlap. */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*x;
	unsigned char	*y;

	x = (unsigned char *)(dest);
	y = (unsigned char *)(src);
	while (n--)
	{
		*x = *y;
		x++;
		y++;
	}
	return (dest);
}
