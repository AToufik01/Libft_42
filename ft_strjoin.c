/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 01:18:08 by ataoufik          #+#    #+#             */
/*   Updated: 2023/11/12 15:56:54 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*p;
	int		len;

	i = 0;
	j = 0;
	if (!s1 && !s2)
		return (0);
	len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	p = (char *)malloc(sizeof(char) * len + 1);
	if (!p)
		return (0);
	while (s1[i])
		p[j++] = s1[i++];
	i = 0;
	while (s2[i])
		p[j++] = s2[i++];
	p[j] = '\0';
	return (p);
}
