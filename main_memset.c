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

int	main(void)
{
	char	str[50] = "1233456789 123456789 123456789";
	int		n = 10;
	int		arr[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
	void	*ptr;

	ptr = memset(arr, 0, 5*(sizeof(int)));
	printarray(ptr, n);
	return (0);
}
