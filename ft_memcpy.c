/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:16:09 by ataoufik          #+#    #+#             */
/*   Updated: 2023/11/12 15:35:39 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*desti;
	const unsigned char	*srcc;

	desti = (unsigned char *)dst;
	srcc = (const unsigned char *)src;
	i = 0;
	if (!desti && !srcc)
		return (NULL);
	while (i < n)
	{
		desti[i] = srcc[i];
		i++;
	}
	return (desti);
}
