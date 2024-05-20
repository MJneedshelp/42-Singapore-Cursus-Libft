/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 21:13:34 by mintan            #+#    #+#             */
/*   Updated: 2024/05/20 21:38:31 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description: fills the first n bytes of the memory area pointed to by s
   with the constant byte c. Returns a pointer to the memory area s.
   The void pointer is cast as an unsigned char (1 byte) so that each byte can
   be assigned*/

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char*)(s);

	while (n--)
	{
		*p = (unsigned char)(c);
		p++;
	}
	return (s);
}
