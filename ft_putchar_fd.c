/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 10:30:53 by mintan            #+#    #+#             */
/*   Updated: 2024/05/25 12:07:14 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description: Outputs the character 'c' to the given file descriptor.*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, sizeof(char));
}
