/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 21:22:42 by mintan            #+#    #+#             */
/*   Updated: 2024/05/18 15:09:51 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description: Locates the first occurence of the null-termindated string
   (needle) in the null-terminated string (haystack). Only a max no. of char n
   is searched within the haystack.
   Return value: Pointer to first occurence of needle in haystack within the
   first len char
   Return value: NULL uf needle not found within first len char
 */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	//Check result when a null string is passed in
	int	i;
	int	j;

	i = 0;
	while (haystack[i] != '\0', i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && i + j < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)(haystack + i));
			j++;
		}
		i++;
	}
	return (NULL);
}
