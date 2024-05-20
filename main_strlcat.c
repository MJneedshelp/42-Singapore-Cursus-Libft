/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 13:44:28 by mintan            #+#    #+#             */
/*   Updated: 2024/05/20 21:03:12 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

int main(void)
{
	printf("--------------ft_strlcat test--------------\n");
	const char src[] = "67890";
	char dst1a[] = "12345";
	char dst1b[] = "12345";
	char dst2a[] = "12345";
	char dst2b[] = "12345";
	char dst3a[] = "12345";
	char dst3b[] = "12345";
	char dst4a[] = "12345";
	char dst4b[] = "12345";

	size_t	n;

	n = 11;
	printf("Original Dst: %s and n: %lu\n", dst1a, n);
	printf("Expected res: %lu | Expected dst: %s\n", strlcat(dst1a, src, n), dst1a);
	printf("Actual res: %lu | Actual dst: %s\n", ft_strlcat(dst1b, src, n), dst1b);


	n = 10;
	printf("Original Dst: %s and n: %lu\n", dst2a, n);
	printf("Expected res: %lu | Expected dst: %s\n", strlcat(dst2a, src, n), dst2a);
	printf("Actual res: %lu | Actual dst: %s\n", ft_strlcat(dst2b, src, n), dst2b);

	n = 6;
	printf("Original Dst: %s and n: %lu\n", dst3a, n);
	printf("Expected res: %lu | Expected dst: %s\n", strlcat(dst3a, src, n), dst3a);
	printf("Actual res: %lu | Actual dst: %s\n", ft_strlcat(dst3b, src, n), dst3b);

	n = 5;
	printf("Original Dst: %s and n: %lu\n", dst4a, n);
	printf("Expected res: %lu | Expected dst: %s\n", strlcat(dst4a, src, n), dst4a);
	printf("Actual res: %lu | Actual dst: %s\n", ft_strlcat(dst4b, src, n), dst4b);
}
