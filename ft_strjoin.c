/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:48:03 by mintan            #+#    #+#             */
/*   Updated: 2024/05/22 17:26:25 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description: Allocates with malloc(3) and returns a new string, which is
   the result of the concatenation of 's1' and 's2'.
   - s1: prefix
   - s2: suffix
*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	len1;
	size_t	len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	ptr = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ft_memcpy(ptr, s1, len1);
	ft_memcpy(ptr + len1, s2, len2);
	*(ptr + len1 + len2) = '\0';
	return (ptr);
}

