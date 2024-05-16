/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 13:28:41 by mintan            #+#    #+#             */
/*   Updated: 2024/05/14 19:38:35 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Description: Takes in a char and checks if the character is a numeric.
  Returns a non-zero value if the char is numeric. Returns 0 if the char is
 non-numeric.*/

#include "libft.h"

int	ft_isdigit(char c)
{
	return (('0' <= c && c <= '9'));
}
