/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_lstnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 02:32:08 by mintan            #+#    #+#             */
/*   Updated: 2024/05/28 02:32:08 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(void)
{
	t_list	*node1;
	t_list	*node2;
	char	*cntnt1 = "1st head";
	char	*cntnt2 = "2nd head";

	printf("Content to be added into the original head node: %s\n", cntnt1);
	node1 = ft_lstnew((void *)cntnt1);
	printf("Content in the original head node: %s | Next ptr: %p\n\n", node1->content, node1->next);
	printf("Content to be added into the new head node: %s\n", cntnt2);
	node2 = ft_lstnew((void *)cntnt2);
	ft_lstadd_front(&node1, node2);
	printf("New head added. New head node content: %s | New head node Next ptr: %p\n\n", node2->content, node2->next);
	printf("Use next of new head to find the next node. Next node content: %s | Next node Next ptr: %p\n\n", node2->next->content, node2->next->next);
	printf("No. of nodes in the list: %d\n\n", ft_lstsize(node2));

	return (0);
}
