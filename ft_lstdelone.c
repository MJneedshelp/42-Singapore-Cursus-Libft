/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 11:55:15 by mintan            #+#    #+#             */
/*   Updated: 2024/05/30 13:41:06 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description: takes as a parameter a node and frees the memory of the node's
   content using the function 'del' given as a parameter and free the node. The
   memory of 'next' must not be freed
   - lst: the node to free
   - del: the address of the function used to del the content */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free (lst);
}
