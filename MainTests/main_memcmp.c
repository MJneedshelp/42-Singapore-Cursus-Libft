/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 21:38:42 by mintan            #+#    #+#             */
/*   Updated: 2024/05/22 10:40:24 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	printarray(int arr[], int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		printf("%d ", arr[i]);
		i++;
	}
}

int	main(void)
{
	printf("--------------ft_memcmp test--------------\n");
	char	s1[] = "123456789";
	char	s2[] = "1234.6789";
	char	s3[] = "wwwwwwwwww";
	int		s4[] = {1, 1, 1};
	int		s5[] = {1, 1, 1};
	int		s6[] = {1, 1, 0};
	size_t	n;

	n = 10 * sizeof(char);
	printf("s1: %s | s2: %s | n = %lu\n", s1, s2, n);
	printf("Expected results: %d\n", memcmp(s1, s2, n));
	printf("Actual results: %d\n", ft_memcmp(s1, s2, n));

	n = 4 * sizeof(char);
	printf("s1: %s | s2: %s | n = %lu\n", s1, s2, n);
	printf("Expected results: %d\n", memcmp(s1, s2, n));
	printf("Actual results: %d\n", ft_memcmp(s1, s2, n));

	n = 4 * sizeof(char);
	printf("s1: %s | s2: %s | n = %lu\n", s1, s3, n);
	printf("Expected results: %d\n", memcmp(s1, s3, n));
	printf("Actual results: %d\n", ft_memcmp(s1, s3, n));

	n = 3 * sizeof(int);
	printf("s1: ");
	printarray(s4, 3);
	printf("\ns2: ");
	printarray(s5, 3);
	printf("\nn: %lu\n", n);
	printf("Expected results: %d\n", memcmp(s4, s5, n));
	printf("Actual results: %d\n", ft_memcmp(s4, s5, n));

	n = 3 * sizeof(int);
	printf("s1: ");
	printarray(s4, 3);
	printf("\ns2: ");
	printarray(s6, 3);
	printf("\nn: %lu\n", n);
	printf("Expected results: %d\n", memcmp(s4, s6, n));
	printf("Actual results: %d\n", ft_memcmp(s4, s6, n));

	n = 2 * sizeof(int);
	printf("s1: ");
	printarray(s4, 3);
	printf("\ns2: ");
	printarray(s6, 3);
	printf("\nn: %lu\n", n);
	printf("Expected results: %d\n", memcmp(s4, s6, n));
	printf("Actual results: %d\n", ft_memcmp(s4, s6, n));
	
	return (0);
}
