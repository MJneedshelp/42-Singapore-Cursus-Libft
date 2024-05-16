/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:30:49 by mintan            #+#    #+#             */
/*   Updated: 2024/05/14 18:28:06 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description: Takes in a character and converts it to upper case. If the char
   is not a lowercase character, then return the same character. */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}
