/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isascii.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 13:44:28 by mintan            #+#    #+#             */
/*   Updated: 2024/05/16 18:42:51 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main(void)
{
	char ch;
	int	i;
	
	printf("--------------ft_isascii test--------------\n");
	ch = 'A';
	printf("ch: %c. Testing isascii: %d | Expected: %d\n", ch, ft_isascii(ch), isascii(ch));
	ch = 'Z';
	printf("ch: %c. Testing isascii: %d | Expected: %d\n", ch, ft_isascii(ch), isascii(ch));
	ch = '0';
	printf("ch: %c. Testing isascii: %d | Expected: %d\n", ch, ft_isascii(ch), isascii(ch));
	ch = '@';
	printf("ch: %c. Testing isascii: %d | Expected: %d\n", ch, ft_isascii(ch), isascii(ch));
	ch = 'a';
	printf("ch: %c. Testing isascii: %d | Expected: %d\n", ch, ft_isascii(ch), isascii(ch));
	ch = 'z';
	printf("ch: %c. Testing isascii: %d | Expected: %d\n", ch, ft_isascii(ch), isascii(ch));
	ch = 'h';
	printf("ch: %c. Testing isascii: %d | Expected: %d\n", ch, ft_isascii(ch), isascii(ch));
	ch = '{';
	printf("ch: %c. Testing isascii: %d | Expected: %d\n", ch, ft_isascii(ch), isascii(ch));
	ch = '9';
	printf("ch: %c. Testing isascii: %d | Expected: %d\n", ch, ft_isascii(ch), isascii(ch));
	ch = '*';
	printf("ch: %c. Testing isascii: %d | Expected: %d\n", ch, ft_isascii(ch), isascii(ch));
	i = 128;
	printf("i: %d. Testing isascii: %d | Expected: %d\n", i, ft_isascii(i), isascii(i));
	i = 255;
	printf("i: %d. Testing isascii: %d | Expected: %d\n", i, ft_isascii(i), isascii(i));
}

