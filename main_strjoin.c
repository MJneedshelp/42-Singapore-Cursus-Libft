/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_substr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 21:38:42 by mintan            #+#    #+#             */
/*   Updated: 2024/05/22 15:52:58 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	printf("--------------ft_strjoin test--------------\n");
	const char	src1[] = "12345";
	const char	src2[] = "67890";
	const char	src3[] = "";
	char		*res;

	printf("s1: %s | s2: %s\n", src1, src2);
	res = ft_strjoin(src1, src2);
	printf("Results: %s\n", res);

	printf("s1: %s | s2: %s\n", src1, src3);
	res = ft_strjoin(src1, src3);
	printf("Results: %s\n", res);

	printf("s1: %s | s2: %s\n", src3, src3);
	res = ft_strjoin(src3, src3);
	printf("Results: %s\n", res);


	return (0);
}
