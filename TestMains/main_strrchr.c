/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 13:44:28 by mintan            #+#    #+#             */
/*   Updated: 2024/05/27 20:13:14 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
	printf("--------------ft_strrchr test--------------\n");
	const char str[] = "!MJ is awesome? anyway...?";
	const char str2[] = "teste";
	int		find;
	char	*res;
	char	*expres;

	find = 'a';
	res = ft_strrchr(str, find);
	expres = strrchr(str, find);
	printf("Input string: %s | Char to find: %c | Print the remaining string after the last found occurence\n", str, find);
	printf("Expected results: %s\n", expres);
	printf("Actual results: %s\n\n", res);

	res = ft_strrchr(str, 0);
	expres = strrchr(str, 0);
	printf("Input string: %s | Char to find: %d | Print the remaining string after the last found occurence\n", str, 0);
	printf("Expected results: %s\n", expres);
	printf("Actual results: %s\n\n", res);

	find = '?';
	res = ft_strrchr(str, find);
	expres = strrchr(str, find);
	printf("Input string: %s | Char to find: %c | Print the remaining string after the last found occurence\n", str, find);
	printf("Expected results: %s\n", expres);
	printf("Actual results: %s\n\n", res);

	find = '!';
	res = ft_strrchr(str, find);
	expres = strrchr(str, find);
	printf("Input string: %s | Char to find: %c | Print the remaining string after the last found occurence\n", str, find);
	printf("Expected results: %s\n", expres);
	printf("Actual results: %s\n\n", res);

	find = 'z';
	res = ft_strrchr(str, find);
	expres = strrchr(str, find);
	printf("Input string: %s | Char to find: %c | Print the remaining string after the last found occurence\n", str, find);
	printf("Expected results: %s\n", expres);
	printf("Actual results: %s\n\n", res);

	find = 1125;
	res = ft_strrchr(str2, find);
	expres = strrchr(str2, find);
	printf("Input string: %s | Char to find: %c | Print the remaining string after the last found occurence\n", str2, find);
	printf("Expected results: %s\n", expres);
	printf("Actual results: %s\n\n", res);

	find = 1024;
	res = ft_strrchr(str, find);
	expres = strrchr(str, find);
	printf("Input string: %s | Char to find: %c | Print the remaining string after the last found occurence\n", str2, find);
	printf("Expected results: %s\n", expres);
	printf("Actual results: %s\n\n", res);





}
