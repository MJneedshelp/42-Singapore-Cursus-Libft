/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 21:13:34 by mintan            #+#    #+#             */
/*   Updated: 2024/05/27 19:53:09 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description: scans the initial n bytes of the memory area pointed to by s
   for the first instance of c. Both c and the bytes of the memory area
   pointed to by s are interpreted as unsigned char. Returns a pointer to the
   matching to the matching byte or NULL if the char is not in the memory area.
   */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*x;

	x = (unsigned char *)(s);
	while (n--)
	{
		if (*x == (unsigned char)c)
			return ((void *)(x));
		x++;
	}
	return (NULL);
}
