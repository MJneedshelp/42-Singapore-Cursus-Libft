/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 13:44:28 by mintan            #+#    #+#             */
/*   Updated: 2024/05/18 15:09:47 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
	printf("--------------ft_strncmp test--------------\n");
	const char str1[] = "ABCDE";
	const char str2[] = "abcde";
	const char str3[]
	size_t	n;
	
	len = ft_strncmp(str1);
	printf("Input string: %s | Expected Len: %lu | Actual Len: %lu\n", str1, strncmp(str1), len);
	len = ft_strncmp(str2);
	printf("Input string: %s | Expected Len: %lu | Actual Len: %lu\n", str1, strncmp(str2), len);

}
