/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 13:44:28 by mintan            #+#    #+#             */
/*   Updated: 2024/05/27 20:06:14 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
	printf("--------------ft_strchr test--------------\n");
	const char str1[] = "MJ is awesome? anyway...";
	const char str2[] = "teste";
	int		find;
	char	*res;
	char	*expres;

	find = 'a';
	res = ft_strchr(str1, find);
	expres = strchr(str1, find);
	printf("Input string: %s | Char to find: %c | Print the remaining string after the first found occurence\n", str1, find);
	printf("Expected results: %s\n", expres);
	printf("Actual results: %s\n\n", res);

	res = ft_strchr(str1, 0);
	expres = strchr(str1, 0);
	printf("Input string: %s | Char to find: %d | Print the remaining string after the first found occurence\n", str1, 0);
	printf("Expected results: %s\n", expres);
	printf("Actual results: %s\n\n", res);

	find = 'z';
	res = ft_strchr(str1, find);
	expres = strchr(str1, find);
	printf("Input string: %s | Char to find: %c | Print the remaining string after the first found occurence\n", str1, find);
	printf("Expected results: %s\n", expres);
	printf("Actual results: %s\n\n", res);

	find = 357;
	res = ft_strchr(str2, find);
	expres = strchr(str2, find);
	printf("Input string: %s | Char to find: %c | Print the remaining string after the first found occurence\n", str1, find);
	printf("Expected results: %s\n", expres);
	printf("Actual results: %s\n\n", res);

	find = 1024;
	res = ft_strchr(str2, find);
	expres = strchr(str2, find);
	printf("Input string: %s | Char to find: %c | Print the remaining string after the first found occurence\n", str2, find);
	printf("Expected results: %s\n", expres);
	printf("Actual results: %s\n\n", res);
}
