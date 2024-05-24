/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:48:03 by mintan            #+#    #+#             */
/*   Updated: 2024/05/23 18:52:25 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


/* Description: Find the first index where s1 does not match any character in
   the set.   */
/*
static size_t	findfst(char const *s1, char const *set, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	setlen;

	i = 0;
	setlen = ft_strlen(set);
	while (i < len)
	{
		j = 0;
		while (j < setlen && set[j] != s1[i])
		{
			j++;
		}
		if (set[j] != s1[i])
			return (i);
		i++;
	}
	return (i);
}
*/

/* Description: counts the number of words after the word is separated
   by the delimiter. Counts the number of transitions from delimiter
   to non-delimiter. */

static int	countwrds(char const *s, char c)
{
	int		count;
	int		i;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (i == 0 && s[i] != c)
			count++;
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			count++;
		i++;
	}
	return (count);
}


/* Description: Allocates with malloc(3) and returns an array of strings
   obtained by spliting 's' using the character 'c' as a delimiter. The
   array must end with a NULL pointer. */

char	**ft_split(char const *s, char c)
{
	char	**ret;
	int		arrnum;

	arrnum = countwrds(s, c) + 1;
	//printf("Inside split now. No. of words: %d\n", arrnum);

	return (NULL);


	//find no. of array of pointers
	//-> countwrds (s, c)
	//malloc array of pointers
	//for each ptr in array -> substr to copy out
	//have to free everything if any of the small malloc fails -> can use the pointers in the array to free

}
