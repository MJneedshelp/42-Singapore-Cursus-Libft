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
#include <ctype.h>
#include "libft.h"

int main(void)
{
	printf("--------------ft_strchr test--------------\n");
	const char *str = "MJ is awesome? anyway...";
	char	find = 'a';
	char	*result;

	result = ft_strchr(str, find);
	printf("Input string: %s\n", str);
	printf("%c\n", result);
	printf("%p\n", result);
	printf("String after |%c|: |%s|\n", find, result);
}
