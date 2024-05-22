/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_tolower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 13:44:28 by mintan            #+#    #+#             */
/*   Updated: 2024/05/14 18:42:11 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main(void)
{
	char ch;

	printf("--------------ft_tolower test--------------\n");
	ch = 'a';
	printf("ch: %c. Testing ft_tolower: %c | Expected: %c\n", ch, ft_tolower(ch), tolower(ch));
	ch = '@';
	printf("ch: %c. Testing ft_tolower: %c | Expected: %c\n", ch, ft_tolower(ch), tolower(ch));
	ch = '0';
	printf("ch: %c. Testing ft_tolower: %c | Expected: %c\n", ch, ft_tolower(ch), tolower(ch));
	ch = 'z';
	printf("ch: %c. Testing ft_tolower: %c | Expected: %c\n", ch, ft_tolower(ch), tolower(ch));
	ch = 'H';
	printf("ch: %c. Testing ft_tolower: %c | Expected: %c\n", ch, ft_tolower(ch), tolower(ch));
	ch = 'P';
	printf("ch: %c. Testing ft_tolower: %c | Expected: %c\n", ch, ft_tolower(ch), tolower(ch));
	ch = 'A';
	printf("ch: %c. Testing ft_tolower: %c | Expected: %c\n", ch, ft_tolower(ch), tolower(ch));
	ch = 'Z';
	printf("ch: %c. Testing ft_tolower: %c | Expected: %c\n", ch, ft_tolower(ch), tolower(ch));

}
