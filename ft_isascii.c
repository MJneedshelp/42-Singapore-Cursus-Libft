/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 23:34:18 by mintan            #+#    #+#             */
/*   Updated: 2024/05/16 23:34:18 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description: takes in a char and checks if the character is a 
   7-bit ASCII character: 0 - 127. Returns a non-zero value if the input is 
   within range. Returns 0 otherwise. */

#include "libft.h"

int ft_isascii(int c)
{
    return (0 <= c && c <= 127);
}


