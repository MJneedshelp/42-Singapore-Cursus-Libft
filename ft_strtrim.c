/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:48:03 by mintan            #+#    #+#             */
/*   Updated: 2024/05/23 17:24:47 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Description: Find the first index where s1 does not match any character in 
   the set.   */

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

/* Description: Find the last index where s1 does not match any character in 
   the set.   */

static size_t	findlst(char const *s1, char const *set, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	setlen;

	i = len;
	setlen = ft_strlen(set);
	while (len > 0)
	{
		j = 0;
		while (j < setlen && set[j] != s1[len - 1])
		{
			j++;
			if (set[j] != s1[len - 1])
				return (len - 1);
		}
		len--;
	}
	return (len);
}

/* Description: Allocates with malloc(3) and returns a copy of 's1' with the 
   characters specified in 'set' removed from the beginning and the end of the 
   string. */

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	size_t	fst;
	size_t	lst;
	size_t	len;
	size_t	rlen;

	len = ft_strlen(s1);
	fst = findfst(s1, set, len);
	lst = findlst(s1, set, len);
	if (fst == len)
		rlen = 0;
	else
	{
		if (fst == 0 && lst == (len - 1))
			rlen = len;
		else
			rlen = lst - fst + 1;
	}
	ret = (char *)malloc((rlen + 1) * sizeof(char));
	if (ret == NULL)
		return (ret);
	ret = ft_memcpy(ret, (s1 + fst), rlen);
	ret[rlen] = '\0';
	return (ret);
}
