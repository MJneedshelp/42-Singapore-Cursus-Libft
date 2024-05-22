/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_calloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 21:38:42 by mintan            #+#    #+#             */
/*   Updated: 2024/05/22 14:55:26 by mintan           ###   ########.fr       */
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
	printf("--------------ft_calloc test--------------\n");
	void		*rese;
	void		*resa;
	void		*resm;
	size_t		nmemb;
	size_t		size;

	nmemb = 10;
	size = sizeof(int);
	printf("nmemb: %lu. size: %lu\n", nmemb, size);
	rese = calloc(nmemb, size);
	resa = ft_calloc(nmemb, size);
	resm = malloc(nmemb * size);	
	printf("Expected results using calloc:\n");
	printarray(rese, nmemb);
	printf("\nActual results using ft_calloc: \n");
	printarray(resa, nmemb);
	printf("\nExpected results using malloc: \n");
	printarray(resm, nmemb);

	nmemb = 0;
	size = sizeof(int);
	printf("\nnmemb: %lu. size: %lu\n", nmemb, size);
	rese = calloc(nmemb, size);
	resa = ft_calloc(nmemb, size);
	resm = malloc(nmemb * size);	
	printf("Expected results using calloc:\n");
	printarray(rese, nmemb);
	printf("\nActual results using ft_calloc: \n");
	printarray(resa, nmemb);
	printf("\nExpected results using malloc: \n");
	printarray(resm, nmemb);

	nmemb = 10;
	size = 0;
	printf("\nnmemb: %lu. size: %lu\n", nmemb, size);
	rese = calloc(nmemb, size);
	resa = ft_calloc(nmemb, size);
	resm = malloc(nmemb * size);	
	printf("Expected results using calloc:\n");
	printarray(rese, nmemb);
	printf("\nActual results using ft_calloc: \n");
	printarray(resa, nmemb);
	printf("\nExpected results using malloc: \n");
	printarray(resm, nmemb);


	return (0);
}
