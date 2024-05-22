/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 21:38:42 by mintan            #+#    #+#             */
/*   Updated: 2024/05/21 20:10:02 by mintan           ###   ########.fr       */
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

struct s_test_struct
{
	int		i;
	double	j;
	char	k[5];
};

int	main(void)
{
	printf("--------------ft_memmove test--------------\n");
	char	src1[] = "123456789";
	char	dest1[50];
	char	dest2[50];
	int		src2[] = {1, 1, 1};
	int		dest3[] = {0, 0, 0, 1, 1, 1};
	int		dest4[] = {0, 0, 0, 1, 1, 1};
	char	str1[100] = "Learningisfun";
	char	str2[100] = "Learningisfun";
	char	*dest5;
	char	*dest6;
	void	*ptr1;
	void	*ptr2;

	dest5 = str1;
	dest6 = str2;

	/*
	char	str1[50] = "1233456789 123456789 123456789";
	char	str2[50] = "1233456789 123456789 123456789";
	int		n = 10;
	int		arr1[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
	int		arr2[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
	int		arr3[] = {55555555, 55555555, 55555555};
	int		arr4[] = {55555555, 55555555, 55555555};
	void	*ptr1;
	void	*ptr2;
	struct	test_struct struct1;
	struct	test_struct struct2;
	*/

	printf("Run memmove on a string. Src: %s. Use n = 10xSizeOf(char). Original dest: %s\n", src1, dest1);
	ptr1 = memmove(dest1, src1, 10*(sizeof(char)));
	ptr2 = ft_memmove(dest2, src1, 10*(sizeof(char)));
	printf("Expected results: %s\n", dest1);
	printf("Actual results: %s\n", dest2);

	printf("Run memmove on array of int. Use n = 3xSizeof(int). Original dest: ");
	printarray(dest3, 6);
	ptr1 = memmove(dest3, src2, 3*(sizeof(int)));
	ptr2 = ft_memmove(dest4, src2, 3*(sizeof(int)));
	printf("\nExpected results: ");
	printarray(ptr1, 6);
	printf("\nActual results: ");
	printarray(ptr2, 6);
	
	printf("\nOriginal string: %s\n", str1);
	memmove(dest5 + 8, dest5, 13);
	printf("memmove overlap: %s\n", dest5);
	ft_memmove(dest6 + 8, dest6, 13);
	printf("ft_memmove overlap: %s\n", dest6);


	/*
	printf("\nRun memmove on string. Use n = 10xSizeOf(char). Original string: %s\n", str1);
	ptr1 = memmove(str1, 0, 10*(sizeof(char)));
	ptr2 = memmove(str2, 0, 10*(sizeof(char)));
	printf("Expected results: %s\n", (char *)ptr1);
	printf("Actual results: %s\n", (char *)ptr2);

	printf("Run memmove on a struct. Use n = SizeOf(struct). Struct contains 1 int, 1 float, 1 string\n");
	memmove(&struct1, 0, (sizeof(struct1)));
	memmove(&struct2, 0, (sizeof(struct2)));
	printf("Expected results: int: %d, float: %f, string: %s\n", struct1.i, struct1.j, struct1.k);
	printf("Actual results: int: %d, float: %f, string: %s\n", struct2.i, struct2.j, struct2.k);
	*/

	return (0);
}
