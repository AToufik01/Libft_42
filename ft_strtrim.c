/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 12:13:22 by ataoufik          #+#    #+#             */
/*   Updated: 2023/11/11 19:24:54 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_ca(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*p;

	start = 0;
	if (!s1 || !set)
		return (NULL);
	end = ft_strlen((char *)s1) - 1;
	while (check_ca((char *)set, s1[start]) == 1)
		start++;
	while (check_ca((char *)set, s1[end]) == 1)
		end--;
	if (start > end)
		return (ft_calloc(1, 1));
	p = ft_substr(s1, start, ((size_t)(end - start) + 1));
	return (p);
}
