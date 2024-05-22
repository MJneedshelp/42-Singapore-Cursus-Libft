/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 14:57:32 by mintan            #+#    #+#             */
/*   Updated: 2024/05/22 15:47:52 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description: returns a pointer to a new string which is a duplicate of the 
   string s. Memory for the new string is obtained with malloc and can be freed 
   with free. */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*ptr;

	len = ft_strlen(s);
	ptr = (char *)malloc((len + 1)* sizeof(char));
	if (ptr == NULL)
		return (ptr);
	ft_strlcpy(ptr, s, len + 1);
	return (ptr);
}
