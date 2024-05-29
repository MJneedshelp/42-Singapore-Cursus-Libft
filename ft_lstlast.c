/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 20:46:49 by mintan            #+#    #+#             */
/*   Updated: 2024/05/29 20:59:08 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description: Returns the last node of the list
   - lst: beginning of the list */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int		size;
	t_list	*last;

	size = ft_lstsize(lst);
	last = lst;
	if (size == 0)
		return (last);
	while (size > 0)
	{
		last = last->next;
		size--;
	}
	return (last);
}
