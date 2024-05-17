/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 13:44:28 by mintan            #+#    #+#             */
/*   Updated: 2024/05/17 22:59:38 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
	printf("--------------ft_strchr test--------------\n");
	const char str[] = "MJ is awesome? anyway...";
	const char find = 'a';
	char	*res;
	char	*expres;

/*
	res = strchr(str, find);
	printf("Input string: %s\n", str);
	printf("%c\n", *res);
	printf("%p\n", res);
	printf("String after |%c|: |%s|\n", find, res);
*/


	res = ft_strchr(str, 0);
	expres = strchr(str, 0);
	printf("Input string: %s | Char to find: %c\n", str, find);
	printf("Expected results: %s\n", expres);
	printf("Actual results: %s\n", res);
}
