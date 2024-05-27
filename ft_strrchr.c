/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 21:22:42 by mintan            #+#    #+#             */
/*   Updated: 2024/05/18 11:23:28 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Description: This returns a pointer to the last occurrence of the
   character c in the string str, or NULL if the character is not found. */

   	/* can try to convert the int c to a char by (char)(c % 256) first
	   then comparing the char with *str*/

char	*ft_strrchr(const char *str, int c)
{
	size_t			len;

	len = ft_strlen(str);
	str = str + len - 1;
	if (c == 0)
		return ((char *)(str + 1));
	while (len > 0)
	{
		if (*str == c)
		{
			return ((char *)(str));
		}
		str--;
		len--;
	}
	return (NULL);
}
