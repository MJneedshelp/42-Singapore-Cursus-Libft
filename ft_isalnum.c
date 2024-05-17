/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 13:28:41 by mintan            #+#    #+#             */
/*   Updated: 2024/05/17 21:24:32 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description: takes in a char and checks if the character is an alphanumeric.
   Returns a non-zero value if the char is alphanumeric. Returns 0 if the char 
   is non-alphanumeric. */

#include "libft.h"

int	ft_isalnum(int c)
{
	return \
	(('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z') \
	|| ('0' <= c && c <= '9'));
}
