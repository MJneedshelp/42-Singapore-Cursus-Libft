/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strmapi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 21:00:15 by mintan            #+#    #+#             */
/*   Updated: 2024/05/24 21:46:10 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	myfx1(unsigned int i, char c)
{
	char ret;

	ret = c + i;
	return (ret);
}

char	myfx2(unsigned int i, char c)
{
	char ret;

	ret = c - i;
	return (ret);
}

int	main(void)
{
	char 		(*fun_ptr1)(unsigned int, char) = &myfx1;
	char		(*fun_ptr2)(unsigned int, char) = &myfx2;
	char const	*str = "0123456789";
	char		*res;

	printf("Original string: %s. Use fx to add index to char.\n", str);
	res = ft_strmapi(str, fun_ptr1);
	printf("Manipulated string: %s\n", res);

	printf("Original string: %s. Use fx to add index to char.\n", str);
	res = ft_strmapi(str, fun_ptr2);
	printf("Manipulated string: %s\n", res);

	return (0);
}
