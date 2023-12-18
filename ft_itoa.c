/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 00:18:48 by ataoufik          #+#    #+#             */
/*   Updated: 2023/11/11 20:49:18 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	cont_numbrt(int nb)
{
	int	cont_numbr;

	cont_numbr = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
		cont_numbr += 1;
	while (nb != 0)
	{
		nb = nb / 10;
		cont_numbr++;
	}
	return (cont_numbr);
}

char	*ft_itoa(int n)
{
	char	*rest;
	int		cont_numbr;
	long	nbr;

	cont_numbr = cont_numbrt(n);
	rest = (char *)malloc(sizeof(char) * cont_numbr + 1);
	if (!rest)
		return (NULL);
	if (n < 0)
	{
		nbr = -(long)n;
		rest[0] = '-';
	}
	else
		nbr = n;
	rest[cont_numbr] = '\0';
	while (nbr != 0)
	{
		rest[cont_numbr - 1] = (nbr % 10) + '0';
		nbr /= 10;
		cont_numbr--;
	}
	if (n == 0)
		rest[0] = '0';
	return (rest);
}
