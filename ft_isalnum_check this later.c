/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 13:28:41 by mintan            #+#    #+#             */
/*   Updated: 2024/05/14 20:53:37 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Description: takes in a char and checks if the character is an alphabet.*/

#include "libft.h"

int	ft_isalnum(char c)
{
	return (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z') || ());
}
