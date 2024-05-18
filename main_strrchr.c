/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 13:44:28 by mintan            #+#    #+#             */
/*   Updated: 2024/05/18 10:31:40 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
	printf("--------------ft_strrchr test--------------\n");
	const char str[] = "!MJ is awesome? anyway...?";
	char	find;
	char	*res;
	char	*expres;

	find = 'a';
	res = ft_strrchr(str, find);
	expres = strrchr(str, find);
	printf("Input string: %s | Char to find: %c | Print the remaining string after the last found occurence\n", str, find);
	printf("Expected results: %s\n", expres);
	printf("Actual results: %s\n", res);

	res = ft_strrchr(str, 0);
	expres = strrchr(str, 0);
	printf("Input string: %s | Char to find: %d | Print the remaining string after the last found occurence\n", str, 0);
	printf("Expected results: %s\n", expres);
	printf("Actual results: %s\n", res);
	
	find = '?';
	res = ft_strrchr(str, find);
	expres = strrchr(str, find);
	printf("Input string: %s | Char to find: %c | Print the remaining string after the last found occurence\n", str, find);
	printf("Expected results: %s\n", expres);
	printf("Actual results: %s\n", res);

	find = '!';
	res = ft_strrchr(str, find);
	expres = strrchr(str, find);
	printf("Input string: %s | Char to find: %c | Print the remaining string after the last found occurence\n", str, find);
	printf("Expected results: %s\n", expres);
	printf("Actual results: %s\n", res);


	find = 'z';
	res = ft_strrchr(str, find);
	expres = strrchr(str, find);
	printf("Input string: %s | Char to find: %c | Print the remaining string after the last found occurence\n", str, find);
	printf("Expected results: %s\n", expres);
	printf("Actual results: %s\n", res);
}
