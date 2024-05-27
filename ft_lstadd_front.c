/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 19:08:17 by mintan            #+#    #+#             */
/*   Updated: 2024/05/27 19:08:17 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description: adds the node 'new' at the beginning of the list. */

# include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
}
