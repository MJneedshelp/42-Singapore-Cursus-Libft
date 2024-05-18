/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 13:44:28 by mintan            #+#    #+#             */
/*   Updated: 2024/05/18 11:54:52 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
	printf("--------------ft_strlen test--------------\n");
	const char str1[] = "1234567890";
//	char str2[] = '';
	size_t	len;
	
	len = ft_strlen(str1);
	printf("Input string: %s | Expected Len: %lu | Actual Len: %lu\n", str1, strlen(str1), len);
	len = ft_strlen(str2);
	printf("Input string: %s | Expected Len: %lu | Actual Len: %lu\n", str2, strlen(str1), len);

	/*
	res = ft_strlen(str, 0);
	expres = strlen(str, 0);
	printf("Input string: %s | Char to find: %d | Print the remaining string after the last found occurence\n", str, 0);
	printf("Expected results: %s\n", expres);
	printf("Actual results: %s\n", res);
	
	find = '?';
	res = ft_strlen(str, find);
	expres = strlen(str, find);
	printf("Input string: %s | Char to find: %c | Print the remaining string after the last found occurence\n", str, find);
	printf("Expected results: %s\n", expres);
	printf("Actual results: %s\n", res);

	find = '!';
	res = ft_strlen(str, find);
	expres = strlen(str, find);
	printf("Input string: %s | Char to find: %c | Print the remaining string after the last found occurence\n", str, find);
	printf("Expected results: %s\n", expres);
	printf("Actual results: %s\n", res);


	find = 'z';
	res = ft_strlen(str, find);
	expres = strlen(str, find);
	printf("Input string: %s | Char to find: %c | Print the remaining string after the last found occurence\n", str, find);
	printf("Expected results: %s\n", expres);
	printf("Actual results: %s\n", res);
	*/
}
