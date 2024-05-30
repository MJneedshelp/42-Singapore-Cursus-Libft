/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_lstadd_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 09:13:24 by mintan            #+#    #+#             */
/*   Updated: 2024/05/30 21:17:09 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	mydel(void *content)
{
	free(content);
}

void	myfunc(void *content)
{
	printf("Content: %s\n", (char *)content);
}


int	main(void)
{
	t_list	*head;
	t_list	*n1;
	t_list	*n2;
	t_list	*n3;
	t_list	*n4;
	t_list	*nxtptr;
	int		lstsize;
	void	(*delptr)(void *) = &mydel;

	head = NULL;
	printf("Creating nodes now\n");
	n1 = ft_lstnew(ft_strdup("n1"));
	n2 = ft_lstnew(ft_strdup("n2"));
	n3 = ft_lstnew(ft_strdup("n3"));
	n4 = ft_lstnew(ft_strdup("n4"));

	printf("Start adding nodes to an empty list from the back\n");
	ft_lstadd_back(&head, n1);
	ft_lstadd_back(&head, n2);
	ft_lstadd_back(&head, n3);
	ft_lstadd_back(&head, n4);
	nxtptr = head;
	while (nxtptr)
	{
		printf("Current node: %s\n",(char *)nxtptr->content);
		nxtptr = nxtptr->next;
	}
	
	printf("\nUse ft_lstiter at n2\n");
	ft_lstiter(n2, &myfunc);
	
	
	printf("\nUse ft_lstclear on n3\n");
	ft_lstclear(&n3, delptr);
	nxtptr = head;
	while (nxtptr)
	{
		printf("Current node: %s\n",(char *)nxtptr->content);
		nxtptr = nxtptr->next;
	}

//	printf("Use ft_lstdelone on node 3\n");
//	ft_lstdelone(n3, delptr);
//	printf("Check contents of node 3: %s\n", (char *)n3->content);
//	printf("Check contents of node 4: %s\n", (char *)n4->content);
}
