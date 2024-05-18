/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 13:44:28 by mintan            #+#    #+#             */
/*   Updated: 2024/05/18 13:48:26 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description: Computes the length of the string up to, but not include the
   null terminating character. */

#include "libft.h"

int main(void)
{
	printf("--------------ft_strlen test--------------\n");
	const char str1[] = "1234567890";
	const char str2[] = "";
	size_t	len;

	len = ft_strlen(str1);
	printf("Input string: %s | Expected Len: %lu | Actual Len: %lu\n", str1, strlen(str1), len);
	len = ft_strlen(str2);
	printf("Input string: %s | Expected Len: %lu | Actual Len: %lu\n", str1, strlen(str2), len);

}
