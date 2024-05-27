/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 21:22:42 by mintan            #+#    #+#             */
/*   Updated: 2024/05/27 20:06:09 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Description: This returns a pointer to the first occurrence of the
   character c in the string str, or NULL if the character is not found. */

char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0')
	{
		if (*str == (unsigned char)c)
		{
			return ((char *)(str));
		}
		str++;
	}
	if ((unsigned char)c == '\0')
	{
		return ((char *)(str));
	}
	return (NULL);
}
