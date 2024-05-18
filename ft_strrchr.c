/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 21:22:42 by mintan            #+#    #+#             */
/*   Updated: 2024/05/17 22:46:54 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*
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
*/

/* Description: This returns a pointer to the last occurrence of the
   character c in the string str, or NULL if the character is not found. */

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	const char	*ptr;

	i = 0;
	ptr = str;
	while (*str != '\0')
	{
		if (*str == c)
		{
			//return ((char *)(str));
			i++;
		}
		str++;
	}
	if (c == '\0')
		return ((char *)(str));
	if (i == 0)
		return (NULL);
	return ((char *)(ptr += i));
}
