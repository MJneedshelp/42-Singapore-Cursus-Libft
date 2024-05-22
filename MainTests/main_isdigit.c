/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isdigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 13:44:28 by mintan            #+#    #+#             */
/*   Updated: 2024/05/14 19:43:48 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main(void)
{
	char ch;
	
	printf("--------------ft_isdigit test--------------\n");
	ch = '9';
	printf("ch: %c. Testing isdigit: %d | Expected: %d\n", ch, ft_isdigit(ch), isdigit(ch));
	ch = 'Z';
	printf("ch: %c. Testing isdigit: %d | Expected: %d\n", ch, ft_isdigit(ch), isdigit(ch));
	ch = '0';
	printf("ch: %c. Testing isdigit: %d | Expected: %d\n", ch, ft_isdigit(ch), isdigit(ch));
	ch = '@';
	printf("ch: %c. Testing isdigit: %d | Expected: %d\n", ch, ft_isdigit(ch), isdigit(ch));
	ch = 'a';
	printf("ch: %c. Testing isdigit: %d | Expected: %d\n", ch, ft_isdigit(ch), isdigit(ch));
	ch = 'z';
	printf("ch: %c. Testing isdigit: %d | Expected: %d\n", ch, ft_isdigit(ch), isdigit(ch));
	ch = 'h';
	printf("ch: %c. Testing isdigit: %d | Expected: %d\n", ch, ft_isdigit(ch), isdigit(ch));
	ch = '{';
	printf("ch: %c. Testing isdigit: %d | Expected: %d\n", ch, ft_isdigit(ch), isdigit(ch));
}
