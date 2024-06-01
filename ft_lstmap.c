/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 19:27:32 by mintan            #+#    #+#             */
/*   Updated: 2024/06/01 13:06:10 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Description: called when malloc fails for a new node. Deletes the *content
   clears the whole list if the new list already has some nodes */

static void	clearnode(void *cpycontent, t_list *newlsthead, void (*del)(void *))
{
	del(cpycontent);
	if (newlsthead)
		ft_lstclear(&newlsthead, del);
}

/* Description: iterates the list 'lst' and applies the function 'f' on the
   content of each node. Creates a new list resulting of the successive
   applications of the function 'f'. The 'del' function is used to delete the
   content of a node if needed
   - lst: the address of a pointer to a node
   - f: the address of the function used to iterate on the list
   - del: the address of the function used to delete the content of a node if
   needed */

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlsthead;
	t_list	*newlstnode;
	t_list	*nxt;
	t_list	*curr;
	void	*cpycontent;

	newlsthead = NULL;
	curr = lst;
	while (curr != NULL)
	{
		nxt = curr->next;
		cpycontent = f(curr->content);
		newlstnode = ft_lstnew(cpycontent);
		if (newlstnode == NULL)
		{
			clearnode(cpycontent, newlsthead, del);
			return (NULL);
		}
		if (newlsthead == NULL)
			newlsthead = newlstnode;
		else
			ft_lstadd_back(&newlsthead, newlstnode);
		curr = nxt;
	}
	return (newlsthead);
}
