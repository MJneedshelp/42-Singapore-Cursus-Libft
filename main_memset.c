/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 21:38:42 by mintan            #+#    #+#             */
/*   Updated: 2024/05/20 22:00:49 by mintan           ###   ########.fr       */
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
	printf("--------------ft_memset test--------------\n");
	char	str1[50] = "1233456789 123456789 123456789";
	char	str2[50] = "1233456789 123456789 123456789";
	int		n = 10;
	int		arr1[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
	int		arr2[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
	void	*ptr1;
	void	*ptr2;
	struct	test_struct struct1;
	struct	test_struct struct2;

	printf("Run memset on array of int. Use n = 5xSizeOf(int). Original array: ");
	printarray(arr1, n);
	ptr1 = memset(arr1, 0, 5*(sizeof(int)));
	ptr2 = memset(arr2, 0, 5*(sizeof(int)));
	printf("\nExpected results: ");
	printarray(ptr1, n);
	printf("\nActual results: ");
	printarray(ptr2, n);

	printf("\nRun memset on string. Use n = 10xSizeOf(char). Original string: %s\n", str1);
	ptr1 = memset(str1, 0, 10*(sizeof(char)));
	ptr2 = memset(str2, 0, 10*(sizeof(char)));
	printf("Expected results: %s\n", (char *)ptr1);
	printf("Actual results: %s\n", (char *)ptr2);

	printf("Run memset on a struct. Use n = SizeOf(struct). Struct contains 1 int, 1 float, 1 string\n");
	memset(&struct1, 0, (sizeof(struct1)));
	memset(&struct2, 0, (sizeof(struct2)));
	printf("Expected results: int: %d, float: %f, string: %s\n", struct1.i, struct1.j, struct1.k);
	printf("Actual results: int: %d, float: %f, string: %s\n", struct2.i, struct2.j, struct2.k);

	return (0);
}
