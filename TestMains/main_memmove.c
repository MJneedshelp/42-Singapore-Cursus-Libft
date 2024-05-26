/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 21:38:42 by mintan            #+#    #+#             */
/*   Updated: 2024/05/25 17:21:36 by mintan           ###   ########.fr       */
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
	printf("--------------ft_memmove test--------------\n");
	char	src1[] = "123456789";
	char	dest1[50];
	char	dest2[50];
	int		src2[] = {1, 1, 1};
	int		dest3[] = {0, 0, 0, 1, 1, 1};
	int		dest4[] = {0, 0, 0, 1, 1, 1};
	char	str1[100] = "Learningisfun";
	char	str2[100] = "Learningisfun";
	char	str3[100] = "thi\xffs i\xfas \0a g\xde\xadood \0nyan\0cat\0 !\r\n";
	char	str4[100] = "thi\xffs i\xfas \0a g\xde\xadood \0nyan\0cat\0 !\r\n";
	char	*dest5;
	char	*dest6;
	char	*dest7;
	char	*dest8;
	void	*ptr1;
	void	*ptr2;

	dest5 = str1;
	dest6 = str2;
	dest7 = str3;
	dest8 = str4;

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

	printf("\nOriginal string: %s\n", str3);
	memmove(dest7 + 7, dest7, 14);
	printf("memmove overlap: %s\n", dest7);
	ft_memmove(dest8 + 7, dest8, 14);
	printf("ft_memmove overlap: %s\n", dest8);

	return (0);
}
