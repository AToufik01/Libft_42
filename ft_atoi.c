/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:30:18 by ataoufik          #+#    #+#             */
/*   Updated: 2023/11/11 20:55:41 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int					i;
	unsigned long long	s;
	int					nig;

	i = 0;
	nig = 1;
	s = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			nig *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		s = s * 10 + (str[i] - 48);
		if (s > LONG_MAX && nig == 1)
			return (-1);
		else if (s > LONG_MAX && nig == -1)
			return (0);
		i++;
	}
	return (nig * s);
}
