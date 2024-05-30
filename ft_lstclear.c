/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 19:27:32 by mintan            #+#    #+#             */
/*   Updated: 2024/05/30 20:31:07 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description: deletes and frees the given node and every successor of that 
   node, using the function 'del' abd free(3). Finally, the pointer to the list
   must be set to NULL
   - lst: the address of a pointer to a node
   - del: the address of the function used to delte the content of the node */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*nxt;
	t_list	*curr;
	int		size;

	if (*lst)
	{
		curr = *lst;
		size = ft_lstsize(*lst);
		while (size > 0)
		{
			nxt = curr->next;
			ft_lstdelone(curr, del);
			curr = nxt;
			size--;
		}
		*lst = NULL;
	}
}
