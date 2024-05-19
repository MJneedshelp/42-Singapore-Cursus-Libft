/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlcpy.c                                     :+:      :+:    :+:   */
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
	printf("--------------ft_strlcpy test--------------\n");
	const char src[] = "1234567890";
	char dst1[15] = "or";
	char dst2[15] = "or";
	char dst3[15] = "or";
	char dst4[15] = "or";
	char dst5[15] = "or";
	size_t	n;
	size_t	res;

	n = 11;
	printf("Source: %s and n: %lu | Original dst: %s\n", src, n, dst1);
//	printf("Expected res: %lu | Expected dst: %s\n", strlcpy(dst, src, n), dst);
	printf("Actual res: %lu | Actual dst: %s\n", ft_strlcpy(dst1, src, n), dst1);

	n = 15;
	printf("Source: %s and n: %lu | Original dst: %s\n", src, n, dst2);
//	printf("Expected res: %lu | Expected dst: %s\n", strlcpy(dst, src, n), dst);
	printf("Actual res: %lu | Actual dst: %s\n", ft_strlcpy(dst2, src, n), dst2);

	n = 4;
	printf("Source: %s and n: %lu | Original dst: %s\n", src, n, dst3);
//	printf("Expected res: %lu | Expected dst: %s\n", strlcpy(dst, src, n), dst);
	printf("Actual res: %lu | Actual dst: %s\n", ft_strlcpy(dst3, src, n), dst3);

	n = 1;
	printf("Source: %s and n: %lu | Original dst: %s\n", src, n, dst4);
//	printf("Expected res: %lu | Expected dst: %s\n", strlcpy(dst, src, n), dst);
	printf("Actual res: %lu | Actual dst: %s\n", ft_strlcpy(dst4, src, n), dst4);

	n = 0;
	printf("Source: %s and n: %lu | Original dst: %s\n", src, n, dst5);
//	printf("Expected res: %lu | Expected dst: %s\n", strlcpy(dst, src, n), dst);
	printf("Actual res: %lu | Actual dst: %s\n", ft_strlcpy(dst5, src, n), dst5);
}
