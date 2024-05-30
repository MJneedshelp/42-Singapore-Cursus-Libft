/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 19:27:32 by mintan            #+#    #+#             */
/*   Updated: 2024/05/30 21:24:44 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description: iterates the list 'lst' and applies the function 'f' on the 
   content of each node:
   - lst: the address of a pointer to a node
   - f: the address of the function used to iterate on the list */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*nxt;
	t_list	*curr;
	int		size;

	if (lst)
	{
		curr = lst;
		size = ft_lstsize(lst);
		while (size > 0)
		{
			nxt = curr->next;
			f(curr->content);
			curr = nxt;
			size--;
		}
	}
}
