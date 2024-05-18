/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 21:22:42 by mintan            #+#    #+#             */
/*   Updated: 2024/05/18 10:40:30 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static	int	ft_strlen(const char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

/* Description: This returns a pointer to the last occurrence of the
   character c in the string str, or NULL if the character is not found. */

char	*ft_strrchr(const char *str, int c)
{
	int			len;

	len = ft_strlen(str);
	str = str + len;
	while (len >= 0)
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
