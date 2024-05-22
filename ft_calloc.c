/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 12:59:27 by mintan            #+#    #+#             */
/*   Updated: 2024/05/22 14:49:11 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description: allocates memory for an array of nmemb elements and of size
   bytes each and returns a pointer to the allocated memory. The memory is set
   to zero. Returns NULL or a unique pointer value that can be free() if nmemb
   or size is 0. Returns error if nmemb x size results in integer overflow. */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
