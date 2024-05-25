/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_striteri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 21:00:15 by mintan            #+#    #+#             */
/*   Updated: 2024/05/25 10:24:02 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	myfx1(unsigned int i, char *c)
{
	*c = *c + i;
}

void	myfx2(unsigned int i, char *c)
{
	*c = *c - i;
}

int	main(void)
{
	void	(*fun_ptr1)(unsigned int, char*) = &myfx1;
	void	(*fun_ptr2)(unsigned int, char*) = &myfx2;
	char	str[20] = "0123456789";

	printf("Original string: %s. Use fx to add index to char.\n", str);
	ft_striteri(str, fun_ptr1);
	printf("Manipulated string: %s\n", str);

	printf("Original string: %s. Use fx to subtract index from char.\n", str);
	ft_striteri(str, fun_ptr2);
	printf("Manipulated string: %s\n", str);

	return (0);
}
