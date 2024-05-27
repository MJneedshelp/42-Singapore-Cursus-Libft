/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 21:38:42 by mintan            #+#    #+#             */
/*   Updated: 2024/05/27 19:45:45 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	printf("--------------ft_memchr test--------------\n");
	const char	str[] = "1234567890";
	char	*src = "/|\x12\xff\x09\x42\2002\42|\\";
	char	c1;
	char	c2;
	void		*rese;
	void		*resa;
	size_t		n;

	c1 = '6';
	c2 = '.';

	n = 10;
	printf("Str: %s. c: %c. n: %lu\n", str, c1, n);
	rese = memchr(str, c1, n);
	resa = ft_memchr(str, c1, n);
	printf("Expected results: string after %c: %s\n", c1, (char *)rese);
	printf("Actual results: string after %c: %s\n\n", c1, (char *)resa);

	n = 5;
	printf("Str: %s. c: %c. n: %lu\n", str, c1, n);
	rese = memchr(str, c1, n);
	resa = ft_memchr(str, c1, n);
	printf("Expected results: string after %c: %s\n", c1, (char *)rese);
	printf("Actual results: string after %c: %s\n\n", c1, (char *)resa);

	n = 10;
	printf("Str: %s. c: %c. n: %lu\n", str, c2, n);
	rese = memchr(str, c2, n);
	resa = ft_memchr(str, c2, n);
	printf("Expected results: string after %c: %s\n", c2, (char *)rese);
	printf("Actual results: string after %c: %s\n\n", c2, (char *)resa);


	n = 10;
	printf("Str: %s. c: %c. n: %lu\n", src, '\200', n);
	rese = memchr(src, '\200', n);
	resa = ft_memchr(src, '\200', n);
	printf("Expected results: string after %c: %s\n", c2, (char *)rese);
	printf("Actual results: string after %c: %s\n\n", c2, (char *)resa);

	return (0);
}
