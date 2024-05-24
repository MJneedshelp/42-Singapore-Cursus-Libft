/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_itoa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 21:38:42 by mintan            #+#    #+#             */
/*   Updated: 2024/05/23 17:27:48 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	printf("--------------ft_itoa test--------------\n");
	int		n1 = 99965;
	int		n2 = -99965;
	int		n3 = 2147483647;
	int		n4 = -2147483648;
	char	*res;

	printf("n: %d\n", n1);
	res = ft_itoa(n1);
	printf("Results: %s\n", res);

	printf("n: %d\n", n2);
	res = ft_itoa(n2);
	printf("Results: %s\n", res);

	printf("n: %d\n", n3);
	res = ft_itoa(n3);
	printf("Results: %s\n", res);

	printf("n: %d\n", n4);
	res = ft_itoa(n4);
	printf("Results: %s\n", res);

	return (0);
}
