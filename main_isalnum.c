/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isalnum.c                                     :+:      :+:    :+:   */
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
	
	printf("--------------ft_isalnum test--------------\n");
	ch = 'A';
	printf("ch: %c. Testing isalnum: %d | Expected: %d\n", ch, ft_isalnum(ch), isalnum(ch));
	ch = 'Z';
	printf("ch: %c. Testing isalnum: %d | Expected: %d\n", ch, ft_isalnum(ch), isalnum(ch));
	ch = '0';
	printf("ch: %c. Testing isalnum: %d | Expected: %d\n", ch, ft_isalnum(ch), isalnum(ch));
	ch = '@';
	printf("ch: %c. Testing isalnum: %d | Expected: %d\n", ch, ft_isalnum(ch), isalnum(ch));
	ch = 'a';
	printf("ch: %c. Testing isalnum: %d | Expected: %d\n", ch, ft_isalnum(ch), isalnum(ch));
	ch = 'z';
	printf("ch: %c. Testing isalnum: %d | Expected: %d\n", ch, ft_isalnum(ch), isalnum(ch));
	ch = 'h';
	printf("ch: %c. Testing isalnum: %d | Expected: %d\n", ch, ft_isalnum(ch), isalnum(ch));
	ch = '{';
	printf("ch: %c. Testing isalnum: %d | Expected: %d\n", ch, ft_isalnum(ch), isalnum(ch));
	ch = '9';
	printf("ch: %c. Testing isalnum: %d | Expected: %d\n", ch, ft_isalnum(ch), isalnum(ch));
	ch = '*';
	printf("ch: %c. Testing isalnum: %d | Expected: %d\n", ch, ft_isalnum(ch), isalnum(ch));
}

