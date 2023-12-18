/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 22:08:27 by ataoufik          #+#    #+#             */
/*   Updated: 2023/11/12 16:15:10 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*hy;
	char	*nd;

	i = 0;
	hy = (char *)haystack;
	nd = (char *)needle;
	if (nd[i] == 0)
		return (hy);
	if (!hy && len == 0)
		return (0);
	while (hy[i])
	{
		j = 0;
		while (nd[j] == hy[j + i] && i + j < len)
		{
			j++;
			if (nd[j] == 0)
				return (&hy[i]);
		}
		i++;
	}
	return (0);
}
