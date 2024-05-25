/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 10:30:53 by mintan            #+#    #+#             */
/*   Updated: 2024/05/25 15:57:43 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Description: Uses a long instead of int to account for -2147483648. */

static void	ft_putlongnbr_fd(long l, int fd)
{
	char	ascii_c;

	if (l < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putlongnbr_fd(-l, fd);
	}
	else if (l > 9)
	{
		ft_putlongnbr_fd(l / 10, fd);
		ft_putlongnbr_fd(l % 10, fd);
	}
	else
	{
		ascii_c = l + 48;
		ft_putchar_fd(ascii_c, fd);
	}
}

/* Description: Outputs the integer 'n' to the given file descriptor. */

void	ft_putnbr_fd(int n, int fd)
{
	long	l;

	l = (long)n;
	ft_putlongnbr_fd(l, fd);
}
