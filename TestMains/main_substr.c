/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_substr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 21:38:42 by mintan            #+#    #+#             */
/*   Updated: 2024/05/27 22:16:49 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	printf("--------------ft_substr test--------------\n");
	const char		src[] = "1234567890";
	char			*target;
	size_t			n;
	unsigned int	start;

	n = 4;
	start = 0;
	printf("Source: %s | start: %d | size: %lu\n", src, start, n);
	target = ft_substr(src, start, n);
	printf("Results: %s\n", target);

	n = 4;
	start = 1;
	printf("Source: %s | start: %d | size: %lu\n", src, start, n);
	target = ft_substr(src, start, n);
	printf("Results: %s\n", target);

	n = 10;
	start = 0;
	printf("Source: %s | start: %d | size: %lu\n", src, start, n);
	target = ft_substr(src, start, n);
	printf("Results: %s\n", target);

	n = 15;
	start = 0;
	printf("Source: %s | start: %d | size: %lu\n", src, start, n);
	target = ft_substr(src, start, n);
	printf("Results: %s\n", target);

	n = 15;
	start = 15;
	printf("Source: %s | start: %d | size: %lu\n", src, start, n);
	target = ft_substr(src, start, n);
	printf("Results: %s\n", target);

	n = 42000;
	start = 0;
	printf("Source: %s | start: %d | size: %lu\n", src, start, n);
	target = ft_substr(src, start, n);
	printf("Results: %s\n", target);

	return (0);
}
