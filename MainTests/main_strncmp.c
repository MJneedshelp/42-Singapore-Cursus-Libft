/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 13:44:28 by mintan            #+#    #+#             */
/*   Updated: 2024/05/22 17:15:03 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(void)
{
	printf("--------------ft_strncmp test--------------\n");
	const char str1[] = "ABCDE";
	const char str2[] = "abcde";
	const char str3[] = "ABCDEF";
	const char str4[] = "ABC";
	const char str5[] = "aBCDE";
	const char str6[] = "ABCDe";
	size_t	n;

	n = 4;
	printf("Comparing s1: %s and s2: %s | n = %d\n", str1, str2, n);
	printf("Expected results: %d | Actual results: %d\n", strncmp(str1, str2, n), ft_strncmp(str1, str2, n));
	printf("Comparing s1: %s and s2: %s | n = %d\n", str1, str3, n);
	printf("Expected results: %d | Actual results: %d\n", strncmp(str1, str3, n), ft_strncmp(str1, str3, n));
	printf("Comparing s1: %s and s2: %s | n = %d\n", str1, str4, n);
	printf("Expected results: %d | Actual results: %d\n", strncmp(str1, str4, n), ft_strncmp(str1, str4, n));
	printf("Comparing s1: %s and s2: %s | n = %d\n", str1, str5, n);
	printf("Expected results: %d | Actual results: %d\n", strncmp(str1, str5, n), ft_strncmp(str1, str5, n));
	printf("Comparing s1: %s and s2: %s | n = %d\n", str1, str6, n);
	printf("Expected results: %d | Actual results: %d\n", strncmp(str1, str6, n), ft_strncmp(str1, str6, n));
	n = 10;
	printf("Comparing s1: %s and s2: %s | n = %d\n", str1, str3, n);
	printf("Expected results: %d | Actual results: %d\n", strncmp(str1, str3, n), ft_strncmp(str1, str3, n));
	n = 1;
	printf("Comparing s1: %s and s2: %s | n = %d\n", str1, str2, n);
	printf("Expected results: %d | Actual results: %d\n", strncmp(str1, str2, n), ft_strncmp(str1, str2, n));
}
