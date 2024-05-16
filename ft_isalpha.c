/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 13:28:41 by mintan            #+#    #+#             */
/*   Updated: 2024/05/14 18:26:04 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Description: takes in a char and checks if the character is an alphabet.*/

#include "libft.h"

int	ft_isalpha(char c)
{
	return (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'));
}
