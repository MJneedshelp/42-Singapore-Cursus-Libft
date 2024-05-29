/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_lstnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 02:32:08 by mintan            #+#    #+#             */
/*   Updated: 2024/05/29 22:40:12 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(void)
{
	printf("--------------ft_lstnew, addfront, lstsz test--------------\n");
	t_list	*head;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*node4;
	t_list	*node5;
	t_list	*lastnode;
	char	*cntnt1 = "node 1";
	char	*cntnt2 = "node 2";
	char	*cntnt4 = "new last node";
	char	*cntnt5 = "even newer last node";

	node1 = ft_lstnew(cntnt1);
	printf("node1next:%p\n", node1->next);
	printf("Node 1 created. Address: %p | Content: %s\n", node1, (char *)node1->content);
	head = node1;
	printf("Head initialised to node 1. Head addr: %p | Head pointed addr: %p | Content in head node: %s\n", &head, head, (char *)head->content);
	node2 = ft_lstnew(cntnt2);
	printf("Node 2 created. Address: %p | Content: %s\n", node2, (char *)node2->content);
	ft_lstadd_front(&head, node2);
	printf("node1next:%p\n", node1->next);
	printf("Added node 2 in front of node 1. New head: %p | Head pointed addr: %p | Content in new head: %s\n\n", &head, head, (char *)head->content);

	node3 = NULL;
	ft_lstadd_front(NULL, node2);
	printf("Try adding blank to a blank list\n\n");
	ft_lstadd_front(&head, NULL);
	printf("Try adding a blank to an existing list. Head: %p | Head pointed addr: %p | Content in head %s\n\n", &head, head, (char *)head->content);

	printf("List size empty list: %d\n\n", ft_lstsize(0));
	printf("List size of current list: %d\n", ft_lstsize(node2));
	lastnode = ft_lstlast(head);
	printf("Last node content of current list: %s\n\n", (char *)lastnode->content);

	node4 = ft_lstnew(cntnt4);
	printf("Node 4 created. Address: %p | Content: %s\n", node4, (char *)node4->content);
	printf("Add node to the end of the list\n");
	ft_listadd_back(&head, node4);
	lastnode = ft_lstlast(head);
	printf("Last node content of current list: %s\n\n", (char *)lastnode->content);

	printf("Make list circular\n");
	lastnode->next = head;
	printf("Circular list: head: %s | next: %s | next: %s | next: %s\n", (char *)head->content, (char *)head->next->content, (char *)head->next->next->content, (char *)head->next->next->next->content);
	printf("List size of circular list: %d\n", ft_lstsize(node2));
	printf("Last node content of circular list: %s\n", (char *)(ft_lstlast(head))->content);
	node5 = ft_lstnew(cntnt5);
	printf("Node 5 created. Address: %p | Content: %s\n", node5, (char *)node5->content);
	printf("Add node to the end of the list\n");
	ft_listadd_back(&head, node5);
	lastnode = ft_lstlast(head);
	printf("Last node content of current list: %s\n\n", (char *)lastnode->content);

	return (0);
}
