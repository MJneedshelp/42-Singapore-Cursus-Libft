/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isprint.c                                     :+:      :+:    :+:   */
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

	printf("--------------ft_isprint test--------------\n");
	ch = 'A';
	printf("ch: %c. Testing isprint: %d | Expected: %d\n", ch, ft_isprint(ch), isprint(ch));
	ch = 'Z';
	printf("ch: %c. Testing isprint: %d | Expected: %d\n", ch, ft_isprint(ch), isprint(ch));
	ch = '0';
	printf("ch: %c. Testing isprint: %d | Expected: %d\n", ch, ft_isprint(ch), isprint(ch));
	ch = ' ';
	printf("ch: %c. Testing isprint: %d | Expected: %d\n", ch, ft_isprint(ch), isprint(ch));
	ch = 'a';
	printf("ch: %c. Testing isprint: %d | Expected: %d\n", ch, ft_isprint(ch), isprint(ch));
	ch = 'z';
	printf("ch: %c. Testing isprint: %d | Expected: %d\n", ch, ft_isprint(ch), isprint(ch));
	ch = 'h';
	printf("ch: %c. Testing isprint: %d | Expected: %d\n", ch, ft_isprint(ch), isprint(ch));
	ch = '{';
	printf("ch: %c. Testing isprint: %d | Expected: %d\n", ch, ft_isprint(ch), isprint(ch));
	ch = '9';
	printf("ch: %c. Testing isprint: %d | Expected: %d\n", ch, ft_isprint(ch), isprint(ch));
	ch = '~';
	printf("ch: %c. Testing isprint: %d | Expected: %d\n", ch, ft_isprint(ch), isprint(ch));
	i = 127;
	printf("i: %d. Testing isprint: %d | Expected: %d\n", i, ft_isprint(i), isprint(i));
	i = 31;
	printf("i: %d. Testing isprint: %d | Expected: %d\n", i, ft_isprint(i), isprint(i));
	i = 0;
	printf("i: %d. Testing isprint: %d | Expected: %d\n", i, ft_isprint(i), isprint(i));
}

