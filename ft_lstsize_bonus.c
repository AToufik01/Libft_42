/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:39:45 by ataoufik          #+#    #+#             */
/*   Updated: 2023/11/11 21:25:05 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		cont;
	t_list	*hde;

	hde = lst;
	cont = 0;
	while (hde != NULL)
	{
		cont++;
		hde = hde->next;
	}
	return (cont);
}
