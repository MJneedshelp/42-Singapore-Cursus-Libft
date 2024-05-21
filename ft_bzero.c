/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 21:13:34 by mintan            #+#    #+#             */
/*   Updated: 2024/05/21 10:43:37 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description: erases data in the n bytes of the memory starting at the 
   location pointed to by s, by writing zeros (bytes containing '\0') to that 
   area */

#include "libft.h"

/*
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)(s);
	while (n--)
	{
		*p = (unsigned char)(c);
		p++;
	}
	return (s);
}
*/

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
