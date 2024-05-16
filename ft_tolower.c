/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:30:49 by mintan            #+#    #+#             */
/*   Updated: 2024/05/14 18:35:59 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Description: Takes in a character and converts it to lower case. If the char
  is not an upper case character, then return the same character.*/

#include "libft.h"

int	ft_tolower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}
