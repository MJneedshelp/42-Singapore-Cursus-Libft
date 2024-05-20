/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 19:55:21 by mintan            #+#    #+#             */
/*   Updated: 2024/05/20 20:26:49 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	const	char *haystack = "Foo Bar Baz";
	const	char *needle = "Bar";
	char	*ptr;
	size_t	len;

	len = 7;
	ptr = strnstr(haystack, needle, len);
	printf("Found: %s\n", ptr);
}
