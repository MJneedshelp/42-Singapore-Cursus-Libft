/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 21:38:42 by mintan            #+#    #+#             */
/*   Updated: 2024/05/21 18:51:12 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	printf("--------------ft_memchr test--------------\n");
	const char	str[] = "1234567890";
	char	c1;
	char	c2;
	void		*rese;
	void		*resa;
	size_t		n;

	c1 = '6';
	c2 = '.';

	n = 10;
	printf("Str: %s. c: %c. n: %d\n", str, c1, n);
	rese = memchr(str, c1, n);
	resa = ft_memchr(str, c1, n);
	printf("Expected results: string after %c: %s\n", c1, rese);
	printf("Actual results: string after %c: %s\n", c1, resa);

	n = 5;
	printf("Str: %s. c: %c. n: %d\n", str, c1, n);
	rese = memchr(str, c1, n);
	resa = ft_memchr(str, c1, n);
	printf("Expected results: string after %c: %s\n", c1, rese);
	printf("Actual results: string after %c: %s\n", c1, resa);

	n = 10;
	printf("Str: %s. c: %c. n: %d\n", str, c2, n);
	rese = memchr(str, c2, n);
	resa = ft_memchr(str, c2, n);
	printf("Expected results: string after %c: %s\n", c2, rese);
	printf("Actual results: string after %c: %s\n", c2, resa);

	return (0);
}
