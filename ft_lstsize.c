/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 19:08:17 by mintan            #+#    #+#             */
/*   Updated: 2024/05/27 19:08:17 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description: counts the number of nodes in a list. */

# include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*nextptr;

	printf("Inside now\n");
	count = 1;
	nextptr = lst->next;
	printf("Current node content: %s | next: %p\n", lst->content, nextptr);
	while (nextptr != NULL || nextptr != lst)
	{
		printf("Inside small loop. Current node content: %s | next: %p\n", lst->content, nextptr);
		nextptr = nextptr->next;
		count++;
		printf("Count: %d\n", count);
	}
	return (count);
}
