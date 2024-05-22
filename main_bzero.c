/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 21:38:42 by mintan            #+#    #+#             */
/*   Updated: 2024/05/21 10:45:38 by mintan           ###   ########.fr       */
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

struct test_struct
{
	int		i;
	double	j;
	char	k[5];
};

int	main(void)
{
	printf("--------------ft_bzero test--------------\n");
	char	str1[50] = "1233456789 123456789 123456789";
	char	str2[50] = "1233456789 123456789 123456789";
	int		n = 10;
	int		arr1[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
	int		arr2[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
	struct	test_struct struct1;
	struct	test_struct struct2;

	printf("Run bzero on array of int. Use n = 5xSizeOf(int). Original array: ");
	printarray(arr1, n);
	bzero(arr1, 5*(sizeof(int)));
	ft_bzero(arr2, 5*(sizeof(int)));
	printf("\nExpected results: ");
	printarray(arr1, n);
	printf("\nActual results: ");
	printarray(arr2, n);

	printf("\nRun bzero on string. Use n = 10xSizeOf(char). Original string: %s\n", str1);
	bzero(str1, 10*(sizeof(char)));
	ft_bzero(str2, 10*(sizeof(char)));
	printf("Expected results: %s\n", str1);
	printf("Actual results: %s\n", str2);

	printf("Run bzero on a struct. Use n = SizeOf(struct). Struct contains 1 int, 1 float, 1 string\n");
	bzero(&struct1, (sizeof(struct1)));
	bzero(&struct2, (sizeof(struct2)));
	printf("Expected results: int: %d, float: %f, string: %s\n", struct1.i, struct1.j, struct1.k);
	printf("Actual results: int: %d, float: %f, string: %s\n", struct2.i, struct2.j, struct2.k);

	return (0);
}
