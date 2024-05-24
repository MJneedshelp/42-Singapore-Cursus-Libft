/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 20:49:54 by mintan            #+#    #+#             */
/*   Updated: 2024/05/24 21:45:59 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description: Applies the function f on each character of the string s,
   passing its index as the first argument and the address of the character
   to be modified as the second argument. */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t			len;
	unsigned int	i;

	i = 0;
	len = ft_strlen(s);
	printf("Inside ft_striteri now. Strlen: %lu\n", len);
	while (i < len)
	{
		printf("i: %d | char: %c | address: %p\n", i, s[i], &s[i]);
		f(i, &s[i]);
		i++;
	}
}
