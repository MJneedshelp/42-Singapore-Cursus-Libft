/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 21:38:42 by mintan            #+#    #+#             */
/*   Updated: 2024/05/25 16:43:12 by mintan           ###   ########.fr       */
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
	printf("--------------ft_memcpy test--------------\n");
	char	src1[] = "123456789";
	char	dest1[50];
	char	dest2[50];
	int		src2[] = {1, 1, 1};
	int		dest3[] = {0, 0, 0, 1, 1, 1};
	int		dest4[] = {0, 0, 0, 1, 1, 1};
	char	str[100] = "Learningisfun";
	char	*src3 = NULL;
	char	*dest5;
	char	*dest6;
	char	*dest7 = NULL;
	char	*dest8 = NULL;
	void	*ptr1;
	void	*ptr2;

	dest5 = str;
	dest6 = str;

	printf("Run memcpy on a string. Src: %s. Use n = 10xSizeOf(char). Original dest: %s\n", src1, dest1);
	//ptr1 = memcpy(dest1, src1, 10*(sizeof(char)));
	ptr2 = ft_memcpy(dest2, src1, 10*(sizeof(char)));
	//printf("Expected results: %s\n", dest1);
	printf("Actual results: %s\n", dest2);

	printf("Run memcpy on a string. Src: %s. Use n = 10xSizeOf(char). Original dest: %s\n", src3, dest7);
	ptr1 = memcpy(dest7, src3, 10*(sizeof(char)));
	ptr2 = ft_memcpy(dest8, src3, 10*(sizeof(char)));
	printf("Expected results: %s\n", dest7);
	printf("Actual results: %s\n", dest8);


	printf("Run memcpy on array of int. Use n = 3xSizeof(int). Original dest: ");
	printarray(dest3, 6);
	ptr1 = memcpy(dest3, src2, 3*(sizeof(int)));
	ptr2 = ft_memcpy(dest4, src2, 3*(sizeof(int)));
	printf("\nExpected results: ");
	printarray(ptr1, 6);
	printf("\nActual results: ");
	printarray(ptr2, 6);

	printf("\nOriginal string: %s\n", str);
	memcpy(dest5 + 8, dest5, 13);
	printf("memcpy overlap: %s\n", dest5);
	ft_memcpy(dest6 + 8, dest6, 13);
	printf("ft_memcpy overlap: %s\n", dest6);
	return (0);
}
