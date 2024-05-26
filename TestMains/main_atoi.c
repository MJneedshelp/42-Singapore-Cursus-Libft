/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 13:44:28 by mintan            #+#    #+#             */
/*   Updated: 2024/05/26 20:36:44 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int main(void)
{
	printf("--------------ft_atoi test--------------\n");
	const char str1[] = "123456hahah";
	const char str2[] = "-123456hahah";
	const char str3[] = "----123456hahah";
	const char str4[] = "-+123456hahah";
	const char str5[] = "++987hahaa";
	const char str6[] = "nonumber";
	const char str7[] = "   123";
	const char str8[] = "00000123";
	const char str9[] = "\t\v\n\r\f123";
	const char str10[] = "+00000123";
	const char str11[] = "\t\v-123";
	const char str12[] = "\t\v+123";

	printf("str: %s\n", str1);
	printf("Expected results: %d | Actual results: %d\n", atoi(str1), ft_atoi(str1));
	printf("str: %s\n", str2);
	printf("Expected results: %d | Actual results: %d\n", atoi(str2), ft_atoi(str2));
	printf("str: %s\n", str3);
	printf("Expected results: %d | Actual results: %d\n", atoi(str3), ft_atoi(str3));
	printf("str: %s\n", str4);
	printf("Expected results: %d | Actual results: %d\n", atoi(str4), ft_atoi(str4));
	printf("str: %s\n", str5);
	printf("Expected results: %d | Actual results: %d\n", atoi(str5), ft_atoi(str5));
	printf("str: %s\n", str6);
	printf("Expected results: %d | Actual results: %d\n", atoi(str6), ft_atoi(str6));
	printf("str: %s\n", str7);
	printf("Expected results: %d | Actual results: %d\n", atoi(str7), ft_atoi(str7));
	printf("str: %s\n", str8);
	printf("Expected results: %d | Actual results: %d\n", atoi(str8), ft_atoi(str8));
	printf("str: %s\n", str9);
	printf("Expected results: %d | Actual results: %d\n", atoi(str9), ft_atoi(str9));
	printf("str: %s\n", str10);
	printf("Expected results: %d | Actual results: %d\n", atoi(str10), ft_atoi(str10));
	printf("str: %s\n", str11);
	printf("Expected results: %d | Actual results: %d\n", atoi(str11), ft_atoi(str11));
	printf("str: %s\n", str12);
	printf("Expected results: %d | Actual results: %d\n", atoi(str12), ft_atoi(str12));

	return (0);
}
