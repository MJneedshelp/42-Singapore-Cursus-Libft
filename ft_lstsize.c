/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 19:08:17 by mintan            #+#    #+#             */
/*   Updated: 2024/05/28 10:14:33 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description: counts the number of nodes in a list. */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*nextptr;

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
