/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 21:38:42 by mintan            #+#    #+#             */
/*   Updated: 2024/05/22 15:52:58 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	printf("--------------ft_strdup test--------------\n");
	const char	src[] = "Stringtoduplicate";
	char		*targete;
	char		*targeta;

	printf("Source: %s\n", src);
	targete = strdup(src);
	targeta = ft_strdup(src);
	printf("Expected results: %s\n", targete);
	printf("Actual results: %s\n", targeta);

	return (0);
}
