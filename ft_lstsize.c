/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 19:08:17 by mintan            #+#    #+#             */
/*   Updated: 2024/05/30 11:54:49 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description: counts the number of nodes in a list. 
   - lst: the beginning of the list */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*nextptr;

	if (lst == NULL)
		return (0);
	count = 1;
	nextptr = lst->next;
	while (nextptr != NULL)
	{
		if (nextptr == lst)
			return (count);
		nextptr = nextptr->next;
		count++;
	}
	return (count);
}
