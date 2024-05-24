/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:48:03 by mintan            #+#    #+#             */
/*   Updated: 2024/05/24 19:57:00 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Description: finds the number of digits in an int. */
static int	findlen(long l, int strlen)
{
	if (l < 0)
	{
		strlen++;
		l = -l;
	}
	while (l > 9)
	{
		l = l / 10;
		strlen++;
	}
	return (strlen);
}

/* Description: converts an int into ascii. Starts from the last digit
   and works towards the first digit. Ends 1 digit earlier for negative
   numbers. */

static char	*myitoa(long l, int len, char *ret)
{
	char	c;

	if (l < 0)
	{
		ret[0] = '-';
		l = -l;
		while (len > 1)
		{
			c = (l % 10) + 48;
			ret[len - 1] = c;
			len--;
			l = l / 10;
		}
	}
	else
	{
		while (len > 0)
		{
			c = (l % 10) + 48;
			ret[len - 1] = c;
			len--;
			l = l / 10;
		}
	}
	return (ret);
}

/* Description: Allocates with malloc(3) and returns a string representing
   the integer received as an argument. Also handles negative numbers. */

char	*ft_itoa(int n)
{
	char	*ret;
	int		strlen;
	long	l;

	l = (long) n;
	strlen = 1;
	strlen = findlen(l, strlen);
	ret = (char *)malloc((strlen + 1) * sizeof(char));
	if (ret == NULL)
		return (NULL);
	ret[strlen] = '\0';
	ret = myitoa(l, strlen, ret);
	return (ret);
}
