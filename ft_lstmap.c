/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 19:27:32 by mintan            #+#    #+#             */
/*   Updated: 2024/05/30 22:11:54 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description: iterates the list 'lst' and applies the function 'f' on the 
   content of each node. Creates a new list resulting of the successive 
   applications of the function 'f'. The 'del' function is used to delete the 
   content of a node if needed
   - lst: the address of a pointer to a node
   - f: the address of the function used to iterate on the list */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void (*f)(void *), void (*del)(void *))
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
