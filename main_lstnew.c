/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_lstnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 02:32:08 by mintan            #+#    #+#             */
/*   Updated: 2024/05/29 20:49:43 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(void)
{
	printf("--------------ft_lstnew, addfront, lstsz test--------------\n");
	t_list	**head;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	char	*cntnt1 = "node 1";
	char	*cntnt2 = "node 2";

	node1 = ft_lstnew((void *)cntnt1);
	printf("Node 1 created. Address: %p | Content: %s\n", node1, (char *)node1->content);
	head = &node1;
	printf("Head initialised to node 1. Head addr: %p | Head pointed addr: %p | Content in head node: %s\n", head, *head, (char *)(*head)->content);
	node2 = ft_lstnew((void *)cntnt2);
	printf("Node 2 created. Address: %p | Content: %s\n", node2, (char *)node2->content);
	ft_lstadd_front(head, node2);
	printf("Added node 2 in front of node 1. New head: %p | Head pointed addr: %p | Content in new head: %s\n\n", head, *head, (char *)(*head)->content);

	node3 = NULL;
	ft_lstadd_front(NULL, node2);
	printf("Try adding blank to a blank list\n\n");
	ft_lstadd_front(head, NULL);
	printf("Try adding a blank to an existing list. Head: %p | Head pointed addr: %p | Content in head %s\n\n", head, *head, (char *)(*head)->content);

	printf("List size empty list: %d\n\n", ft_lstsize(0));
	printf("List size of current list: %d\n\n", ft_lstsize(*head));
//	node1->next = node2;
//	printf("List size of circular list: %d\n\n", ft_lstsize(*head));
	
	return (0);
}
