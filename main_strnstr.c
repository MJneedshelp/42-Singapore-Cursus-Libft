/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 13:44:28 by mintan            #+#    #+#             */
/*   Updated: 2024/05/18 15:09:47 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<string.h>

int main(void)
{
	printf("--------------ft_strnstr test--------------\n");
	const char haystack[] = "Heello";
	const char needle1[] = "el";
	const char needle2[] = "verylong";
	const char needle3[] = "wrong";
	const char needle4[] = "";
	size_t	n;

	n = 4;
	printf("Haystack %s | Needle: %s | n: %lu\n", haystack, needle1, n);
	printf("Actual results: %s\n", ft_strnstr(haystack, needle1, n));
	//printf("Expected results: %s | Actual results: %s\n", strnstr(haystack, needle1, n), ft_strnstr(haystack, needle1, n));
	printf("Haystack %s | Needle: %s | n: %lu\n", haystack, needle2, n);
	printf("Actual results: %s\n", ft_strnstr(haystack, needle2, n));
	//printf("Expected results: %s | Actual results: %s\n", strnstr(haystack, needle2, n), ft_strnstr(haystack, needle2, n));
	printf("Haystack %s | Needle: %s | n: %lu\n", haystack, needle3, n);
	printf("Actual results: %s\n", ft_strnstr(haystack, needle3, n));
	//printf("Expected results: %s | Actual results: %s\n", strnstr(haystack, needle3, n), ft_strnstr(haystack, needle3, n));

	n = 2;
	printf("Haystack %s | Needle: %s | n: %lu\n", haystack, needle1, n);
	printf("Actual results: %s\n", ft_strnstr(haystack, needle1, n));
	printf("Haystack %s | Needle: %s | n: %lu\n", haystack, needle4, n);
	printf("Actual results: %s\n", ft_strnstr(haystack, needle4, n));
}
