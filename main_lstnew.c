/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_lstnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 02:32:08 by mintan            #+#    #+#             */
/*   Updated: 2024/05/28 10:14:45 by mintan           ###   ########.fr       */
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
	ft_lstadd_front(head, node3);
	printf("Try adding blank node 3 in front. Head: %p | Head pointed addr: %p | Content in head %s\n", head, *head, (char *)(*head)->content);



	/*
	printf("Content in the original head node: %s | Next ptr: %p\n\n", (char *)node1->content, node1->next);
	printf("Content to be added into the new head node: %s\n", cntnt2);
	printf("New head added. New head node content: %s | New head node Next ptr: %p\n\n", (char *)node2->content, node2->next);
	printf("Use next of new head to find the next node. Next node content: %s | Next node Next ptr: %p\n\n", (char *)node2->next->content, node2->next->next);
	node1->next = node2;
	printf("No. of nodes in the list: %d\n\n", ft_lstsize(node2));
*/
	return (0);
}
