/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:34:39 by ataoufik          #+#    #+#             */
/*   Updated: 2023/11/11 19:03:57 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_src;
	size_t	len_dst;

	i = 0;
	len_src = ft_strlen((char *)src);
	if (!dstsize)
		return (len_src);
	len_dst = ft_strlen((char *)dst);
	if (dstsize < len_dst)
		return (dstsize + len_src);
	while (src[i] && (i + len_dst) < dstsize - 1)
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[i + len_dst] = '\0';
	return (len_dst + len_src); 
}
