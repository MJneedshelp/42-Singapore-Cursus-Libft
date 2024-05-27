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
	t_list	*head1;
	t_list	*head2;
	char	*cntnt1 = "1st head";
	char	*cntnt2 = "2nd head";

	printf("Content to be added into the original head node: %s\n", cntnt1);
	head1 = ft_lstnew((void *)cntnt1);
	printf("Content in the original head node: %s | Next ptr: %p\n\n", head1->content, head1->next);
	printf("Content to be added into the new head node: %s\n", cntnt2);
	head2 = ft_lstnew((void *)cntnt2);
	ft_lstadd_front(&head1, head2);
	printf("New head added. New head node content: %s | New head node Next ptr: %p\n\n", head2->content, head2->next);
	printf("Use next of new head to find the next node.\n Next node content: %s | Next node Next ptr: %p\n\n", head2->next->content, head2->next->next);

	return (0);
}
