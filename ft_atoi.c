/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 11:08:26 by mintan            #+#    #+#             */
/*   Updated: 2024/05/26 20:36:32 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description: converts the initial portion of the string pointed to by str to
   int. Retruns the converted value or 0 on error. */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	ret;
	int	neg;

	ret = 0;
	neg = 1;
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	if (*str == '-')
	{	
		neg = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		ret = (ret * 10) + (*str - 48);
		str++;
	}
	return (neg * ret);
}
