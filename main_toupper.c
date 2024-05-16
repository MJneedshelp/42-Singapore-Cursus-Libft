/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_toupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 13:44:28 by mintan            #+#    #+#             */
/*   Updated: 2024/05/14 18:13:54 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main(void)
{
	char ch;

	printf("--------------ft_toupper test--------------\n");
	ch = 'a';
	printf("ch: %c. Testing ft_toupper: %c | Expected: %c\n", ch, ft_toupper(ch), toupper(ch));
	ch = '@';
	printf("ch: %c. Testing ft_toupper: %c | Expected: %c\n", ch, ft_toupper(ch), toupper(ch));
	ch = '0';
	printf("ch: %c. Testing ft_toupper: %c | Expected: %c\n", ch, ft_toupper(ch), toupper(ch));
	ch = 'z';
	printf("ch: %c. Testing ft_toupper: %c | Expected: %c\n", ch, ft_toupper(ch), toupper(ch));
	ch = 'g';
	printf("ch: %c. Testing ft_toupper: %c | Expected: %c\n", ch, ft_toupper(ch), toupper(ch));
	ch = 'P';
	printf("ch: %c. Testing ft_toupper: %c | Expected: %c\n", ch, ft_toupper(ch), toupper(ch));
}
