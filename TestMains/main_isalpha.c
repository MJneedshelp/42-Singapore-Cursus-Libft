/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 13:44:28 by mintan            #+#    #+#             */
/*   Updated: 2024/05/14 17:52:14 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main(void)
{
	char ch;
	
	printf("--------------ft_isalpha test--------------\n");
	ch = 'A';
	printf("ch: %c. Testing isalpha: %d | Expected: %d\n", ch, ft_isalpha(ch), isalpha(ch));
	ch = 'Z';
	printf("ch: %c. Testing isalpha: %d | Expected: %d\n", ch, ft_isalpha(ch), isalpha(ch));
	ch = '0';
	printf("ch: %c. Testing isalpha: %d | Expected: %d\n", ch, ft_isalpha(ch), isalpha(ch));
	ch = '@';
	printf("ch: %c. Testing isalpha: %d | Expected: %d\n", ch, ft_isalpha(ch), isalpha(ch));
	ch = 'a';
	printf("ch: %c. Testing isalpha: %d | Expected: %d\n", ch, ft_isalpha(ch), isalpha(ch));
	ch = 'z';
	printf("ch: %c. Testing isalpha: %d | Expected: %d\n", ch, ft_isalpha(ch), isalpha(ch));
	ch = 'h';
	printf("ch: %c. Testing isalpha: %d | Expected: %d\n", ch, ft_isalpha(ch), isalpha(ch));
	ch = '{';
	printf("ch: %c. Testing isalpha: %d | Expected: %d\n", ch, ft_isalpha(ch), isalpha(ch));
}
