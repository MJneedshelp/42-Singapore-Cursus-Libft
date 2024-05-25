/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 21:38:42 by mintan            #+#    #+#             */
/*   Updated: 2024/05/23 17:27:48 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void printarr(char **arr)
{
	size_t i;
	i = 0;
	while (*arr != NULL)
		{
			printf("arr index: %lu | word: %s\n", i, *arr);
			arr++;
			i++;
		}
}

/*
void printarr(char **arr)
{
	size_t i;
	i = 0;
	while (arr[i] != NULL)
		{
			printf("Word: %s\n", arr[i]);
			i++;
		}
}
*/

int	main(void)
{
	printf("--------------ft_split test--------------\n");
	const char	*s1 = "this.is.hard";
	const char	*s2 = "this.is.hard.";
	const char	*s3 = ".this.is.hard";
	const char	*s4 = ".this...hard";
	const char	*s5 = "this is hard";
	const char	*s6 = "..........";
	const char	delim = '.';
	char		**res;

	printf("Source: %s | delim: %c\n", s1, delim);
	res = ft_split(s1, delim);
	printf("Results:\n");
	printarr(res);

	printf("\nSource: %s | delim: %c\n", s2, delim);
	res = ft_split(s2, delim);
	printf("Results:\n");
	printarr(res);

	printf("\nSource: %s | delim: %c\n", s3, delim);
	res = ft_split(s3, delim);
	printf("Results:\n");
	printarr(res);

	printf("\nSource: %s | delim: %c\n", s4, delim);
	res = ft_split(s4, delim);
	printf("Results:\n");
	printarr(res);

	printf("\nSource: %s | delim: %c\n", s5, delim);
	res = ft_split(s5, delim);
	printf("Results:\n");
	printarr(res);

	printf("\nSource: %s | delim: %c\n", s6, delim);
	res = ft_split(s6, delim);
	printf("Results:\n");
	printarr(res);
	return (0);
}
