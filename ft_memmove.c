/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 21:13:34 by mintan            #+#    #+#             */
/*   Updated: 2024/05/21 20:40:06 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description: copies n bytes from memory area src to memory area dest. Memory
   areas may overlap. Copying takes place as though the bytes are first copied
   into a temporary array that does not overlap src or dest. The bytes are
   then copied from the temporary array to dest. */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*x;
	unsigned char	*y;
	size_t			i;

	x = (unsigned char *)(dest);
	y = (unsigned char *)(src);
	i = n;
	if (x == y || n == 0)
		return (dest);
	if (dest < src)
		ft_memcpy(dest, src, n);
	else
	{
		while (n > 0)
		{
			*(x + n) = *(y + n);
			n--;
		}
	}
	return (dest);
}

/* Other code
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	temp[n];

	ft_memcpy(temp, src, n);
	ft_memcpy(dest, temp, n);
	return (dest);
}
*/
