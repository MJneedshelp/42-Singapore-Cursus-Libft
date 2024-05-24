/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:48:03 by mintan            #+#    #+#             */
/*   Updated: 2024/05/24 20:02:09 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Description: counts the number of words after the word is separated
   by the delimiter. Counts the number of transitions from delimiter
   to non-delimiter. */

static int	countwrds(char const *s, char c)
{
	int	count;
	int	i;

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

/* Description: Moves the str pointer to the start of a character after the
delimiter. Stops before the '\0'. */

static const char	*findwrdstrt(char const *s, char c)
{
	while (*s == c && *s != '\0')
		s++;
	return (s);
}

/* Description: Counts the len of the word based on the current position of
   the string. Checks when a delimiter or '\0' is reached. */

static size_t	findwrdlen(char const *s, char c)
{
	size_t	count;
	int		i;

	count = 1;
	i = 0;
	while (s[i + 1] != c && s[i + 1] != '\0')
	{
		i++;
		count++;
	}
	return (count);
}

/* Description: free all the elements in the arr if any malloc fails.
*/

static void	freeall(char **arr, int n)
{
	int	i;

	i = 0;
	while (i <= n)
	{
		free(arr[i]);
		i++;
	}
}

/* Description: Allocates with malloc(3) and returns an array of strings
   obtained by spliting 's' using the character 'c' as a delimiter. The
   array must end with a NULL pointer. */

char	**ft_split(char const *s, char c)
{
	char	**ret;
	int		numwrd;
	int		i;

	i = 0;
	numwrd = countwrds(s, c);
	ret = (char **)malloc((numwrd + 1) * sizeof(char *));
	if (ret == NULL)
		return (NULL);
	while (i < numwrd)
	{
		s = findwrdstrt(s, c);
		ret[i] = ft_substr(s, 0, findwrdlen(s, c));
		if (ret[i] == NULL)
		{
			freeall(ret, i);
			free(ret);
			return (NULL);
		}
		s = s + findwrdlen(s, c);
		i++;
	}
	ret[i] = NULL;
	return (ret);
}
		//find start and len of word -> done
			//fx to move str to start of word -> done
			//fx to count len of word -> done
		//ft_substring of word into char* -> done
			//if char* == NULL, fx to free all and break out of loop
			//free the big malloc
		//move the word start to end of the word -> done
