/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 13:44:28 by mintan            #+#    #+#             */
/*   Updated: 2024/05/26 19:34:16 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

int main(void)
{
	printf("--------------ft_strlcat test--------------\n");
	const char src1a[] = "67890";
	const char src1b[] = "67890";
	const char src2a[] = "67890";
	const char src2b[] = "67890";
	const char src3a[] = "67890";
	const char src3b[] = "67890";
	const char src4a[] = "67890";
	const char src4b[] = "67890";
	const char src5a[] = "67890";
	const char src5b[] = "67890";
	const char src6a[] = "67890";
	const char src6b[] = "67890";

	char dst1a[] = "12345";
	char dst1b[] = "12345";
	char dst2a[] = "12345";
	char dst2b[] = "12345";
	char dst3a[] = "12345";
	char dst3b[] = "12345";
	char dst4a[] = "12345";
	char dst4b[] = "12345";
	char dst5a[] = "12345";
	char dst5b[] = "12345";
	char dst6a[] = "12345";
	char dst6b[] = "12345";


	size_t	n;

	n = 11;
	printf("Original Dst: %s | Src: %s | n: %lu\n", dst1a, src1a, n);
	printf("Expected res: %lu | Expected dst: %s\n", strlcat(dst1a, src1a, n), dst1a);
	printf("Actual res: %lu | Actual dst: %s\n\n", ft_strlcat(dst1b, src1b, n), dst1b);


	n = 10;
	printf("Original Dst: %s | Src: %s | n: %lu\n", dst2a, src2a, n);
	printf("Expected res: %lu | Expected dst: %s\n", strlcat(dst2a, src2a, n), dst2a);
	printf("Actual res: %lu | Actual dst: %s\n\n", ft_strlcat(dst2b, src2b, n), dst2b);

	n = 6;
	printf("Original Dst: %s | Src: %s | n: %lu\n", dst3a, src3a, n);
	printf("Expected res: %lu | Expected dst: %s\n", strlcat(dst3a, src3a, n), dst3a);
	printf("Actual res: %lu | Actual dst: %s\n\n", ft_strlcat(dst3b, src3b, n), dst3b);

	n = 5;
	printf("Original Dst: %s | Src: %s | n: %lu\n", dst4a, src4a, n);
	printf("Expected res: %lu | Expected dst: %s\n", strlcat(dst4a, src4a, n), dst4a);
	printf("Actual res: %lu | Actual dst: %s\n\n", ft_strlcat(dst4b, src4b, n), dst4b);


	n = 0;
	printf("Original Dst: %s | Src: %s | n: %lu\n", dst5a, src5a, n);
	printf("Expected res: %lu | Expected dst: %s\n", strlcat(dst4a, src5a, n), dst5a);
	printf("Actual res: %lu | Actual dst: %s\n\n", ft_strlcat(dst4b, src5b, n), dst5b);

	n = 2;
	printf("Original Dst: %s Src: %s | n: %lu\n", dst6a, src6a, n);
	printf("Expected res: %lu | Expected dst: %s\n", strlcat(dst6a, src6a, n), dst6a);
	printf("Actual res: %lu | Actual dst: %s\n\n", ft_strlcat(dst6b, src6b, n), dst6b);
}
