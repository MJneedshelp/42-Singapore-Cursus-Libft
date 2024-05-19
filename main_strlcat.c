strlcpy/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 13:44:28 by mintan            #+#    #+#             */
/*   Updated: 2024/05/18 15:09:47 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(void)
{
	printf("--------------ft_strlcat test--------------\n");
	const char src[] = "67890";
	char dst[] = "12345";
/*	char dst1[] = "12345";
	char dst2[] = "12345";
	char dst3[] = "12345";
	char dst4[] = "12345";
*/
	size_t	n;
	size_t	res;

	n = 11;
	printf("Original Dst: %s and n: %lu\n", dst, n);
//	printf("Expected res: %lu | Expected dst: %s\n", strlcat(dst1, src, n), dst1);
	printf("Actual res: %lu | Actual dst: %s\n", ft_strlcat(dst, src, n), dst);


	n = 10;
	printf("Original Dst: %s and n: %lu\n", dst, n);
//	printf("Expected res: %lu | Expected dst: %s\n", strlcat(dst2, src, n), dst)2;
	printf("Actual res: %lu | Actual dst: %s\n", ft_strlcat(dst, src, n), dst);

	n = 6;
	printf("Original Dst: %s and n: %lu\n", dst, n);
//	printf("Expected res: %lu | Expected dst: %s\n", strlcat(dst3, src, n), dst3);
	printf("Actual res: %lu | Actual dst: %s\n", ft_strlcat(dst, src, n), dst);

	n = 5;
	printf("Original Dst: %s and n: %lu\n", dst, n);
//	printf("Expected res: %lu | Expected dst: %s\n", strlcat(dst4, src, n), dst4);
	printf("Actual res: %lu | Actual dst: %s\n", ft_strlcat(dst, src, n), dst);
}
