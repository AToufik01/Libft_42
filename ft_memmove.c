/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:21:53 by ataoufik          #+#    #+#             */
/*   Updated: 2023/11/12 15:43:35 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*dsti;
	unsigned char	*srcc;

	i = len;
	dsti = (unsigned char *)dst;
	srcc = (unsigned char *)src;
	if (!dsti && !srcc)
		return (NULL);
	if (dsti > srcc)
	{
		while (i--)
			dsti[i] = srcc[i];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			dsti[i] = srcc[i];
			i++;
		}
	}
	return (dsti);
}
