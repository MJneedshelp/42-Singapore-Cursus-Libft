/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 13:44:28 by mintan            #+#    #+#             */
/*   Updated: 2024/05/22 11:33:31 by mintan           ###   ########.fr       */
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

	return (0);
}
