/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 21:13:34 by mintan            #+#    #+#             */
/*   Updated: 2024/05/22 10:15:56 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description: compares the first n bytes (each interpreted as unsigned char)
   of the memory areas s1 and s2. Returns an integer:
   - < 0: s1 - s2 < 0
   - = 0: s1 - s2 = 0
   - > 0: s1 - s2 > 0
 */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*x;
	unsigned char	*y;

	x = (unsigned char *)(s1);
	y = (unsigned char *)(s2);
	while (n--)
	{
		if (*x != *y)
			return (*x - *y);
		x++;
		y++;
	}
	return (0);
}
