/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strtrim.c                                     :+:      :+:    :+:   */
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
	printf("--------------ft_strtrim test--------------\n");
	const char	*s1 = "assaHHHsaa";
	const char	*s2 = "asHHsaHsaa";
	const char	*s3 = "assasaasaa";
	const char	*s4 = "aHHHHHHHHH";
	const char	*s5 = "HHHHHHHHHs";
	const char	*s6 = "HHHHHHHHHH";
	const char	*s7 = "";
	const char	*s8 = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ";
	const char	*set1 = "as";
	const char	*set2 = " \t\n";
	char		*res;

	printf("Source: %s | set: %s\n", s1, set1);
	res = ft_strtrim(s1, set1);
	printf("Results: %s\n\n", res);

	printf("Source: %s | set: %s\n", s2, set1);
	res = ft_strtrim(s2, set1);
	printf("Results: %s\n\n", res);

	printf("Source: %s | set: %s\n", s3, set1);
	res = ft_strtrim(s3, set1);
	printf("Results: %s\n\n", res);

	printf("Source: %s | set: %s\n", s4, set1);
	res = ft_strtrim(s4, set1);
	printf("Results: %s\n\n", res);

	printf("Source: %s | set: %s\n", s5, set1);
	res = ft_strtrim(s5, set1);
	printf("Results: %s\n\n", res);

	printf("Source: %s | set: %s\n", s6, set1);
	res = ft_strtrim(s6, set1);
	printf("Results: %s\n\n", res);

	printf("Source: %s | set: %s\n", s7, set1);
	res = ft_strtrim(s7, set1);
	printf("Results: %s\n\n", res);

	printf("Source: %s | set: %s\n", s8, set2);
	res = ft_strtrim(s8, set2);
	printf("Results: %s\n\n", res);

	return (0);
}
