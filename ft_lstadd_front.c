/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 19:08:17 by mintan            #+#    #+#             */
/*   Updated: 2024/05/29 22:25:25 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description: adds the node 'new' at the beginning of the list.
   - lst: address of a pointer to the first link of a list
   - new: address of a pointer to the node to be added to the list
*/

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
//	printf("Result of if(lst): %d\n", lst==NULL);
//	printf("Result of if(new): %d\n", new==NULL);
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}
