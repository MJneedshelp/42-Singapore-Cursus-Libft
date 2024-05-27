/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 21:22:42 by mintan            #+#    #+#             */
/*   Updated: 2024/05/27 20:13:24 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Description: This returns a pointer to the last occurrence of the
   character c in the string str, or NULL if the character is not found. */

char	*ft_strrchr(const char *str, int c)
{
	size_t			len;

	len = ft_strlen(str);
	str = str + len - 1;
	if ((unsigned char)c == 0)
		return ((char *)(str + 1));
	while (len > 0)
	{
		if (*str == (unsigned char)c)
		{
			return ((char *)(str));
		}
		str--;
		len--;
	}
	return (NULL);
}
