/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_lstadd_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 09:13:24 by mintan            #+#    #+#             */
/*   Updated: 2024/05/30 13:43:17 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	t_list	*head;
	t_list	*n1;
	t_list	*n2;
	t_list	*n3;
	t_list	*n4;
	t_list	*nxtptr;
	int		lstsize;

	head = NULL;
	printf("Creating nodes now\n");
	n1 = ft_lstnew("n1");
	n2 = ft_lstnew("n2");
	n3 = ft_lstnew("n3");
	n4 = ft_lstnew("n4");

	printf("Start adding nodes to an empty list from the back\n");
	ft_lstadd_back(&head, n1);
	printf("Node 1 added\n");
	ft_lstadd_back(&head, n2);
	ft_lstadd_back(&head, n3);
	ft_lstadd_back(&head, n4);
	nxtptr = head;
	while (nxtptr)
	{
		printf("Current node: %s\n",(char *)nxtptr->content);
		nxtptr = nxtptr->next;
	}
}
