/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:44:37 by ataoufik          #+#    #+#             */
/*   Updated: 2023/11/11 21:23:47 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;
	t_list	*nodenxt;

	if (lst == NULL || *lst == NULL || del == NULL)
		return ;
	node = *lst;
	while (node)
	{
		nodenxt = node->next;
		ft_lstdelone(node, del);
		node = nodenxt;
	}
	*lst = NULL;
}
