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
   - f: the address of the function used to iterate on the list
   - del: the address of the function used to delete the content of a node if
   needed */

#include "libft.h"

/*
static t_list	*newnode(void *content)
{
	t_list	*node;
	node = ft_lstnew(content);
	return

}
*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlsthead;
	t_list	*newlstnode;
	t_list	*nxt;
	t_list	*curr;
	void	*cpycontent;
	int		size;

	newlsthead = NULL;
	if (lst)
	{
		curr = lst;
		size = ft_lstsize(lst);
		while (size > 0)
		{
			nxt = curr->next;
			cpycontent = f(curr->content);
			newlstnode = ft_lstnew(cpycontent);
			if (newlstnode == NULL)
			{
				del(cpycontent);
				free(newlstnode);
				if (newlsthead)
					ft_lstclear(&newlsthead, del);
				return (NULL);
			}
			if (newlsthead == NULL)
				newlsthead = newlstnode;
			else
				ft_lstadd_back(&newlsthead, newlstnode);
			curr = nxt;
			size--;
		}
	}
}



			//step through each node of the old list
				//use f on the content to return a pointer to the content of the node on the old list -> done
				//use listnew to create a new node -> done
				//check if the node was assigned properly.Check if malloc passes
					//If malloc fails, use del on the cpycontent -> done
					//Check if there's a new head already. If there is a new head -> done
						//use ft_lstclear from the start of the new list -> done
					//return NULL -> done
				//set the first node as head -> done
				//if malloc properly, lstadd_back only for nodes 2 onwards
