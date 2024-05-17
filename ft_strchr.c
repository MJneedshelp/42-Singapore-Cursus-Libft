/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
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

/* Description: This returns a pointer to the first occurrence of the 
   character c in the string str, or NULL if the character is not found. */

char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0')
	{
		printf("At this char now: %c\n", *str);
		printf("%p\n", str);
		if (*str == c)
		{
			printf("At this char now: %c\n", *str);
			return ((char *)(str));
		}
		str++;
	}
	return (NULL);
}
