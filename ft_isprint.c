/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 13:28:41 by mintan            #+#    #+#             */
/*   Updated: 2024/05/16 18:38:04 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description: takes in a char and checks if the character is printable. 
   32 <= Printable characters <= 126. Returns a non-zero value if the char is 
   printable. Returns 0 if the char is non-printable. */

#include "libft.h"

int	ft_isprint(int c)
{
	return (32 <= c && c < 127);
}
