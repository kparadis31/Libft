/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kparadis <je73@hotmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 01:38:45 by kparadis          #+#    #+#             */
/*   Updated: 2022/12/08 01:44:41 by kparadis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Alloue (avec malloc(3)) et retourne une chaîne
de caractères représentant l’entier ’n’ reçu en
argument. Les nombres négatifs doivent être gérés.*/

#include "libft.h"

static unsigned int	get_positive_number(int n)
{
	if (n < 0)
		return ((unsigned int)-n);
	return ((unsigned int)n);
}

static int	get_digit_count(int n)
{
	int				count;
	unsigned int	nb;

	count = n < 0;
	nb = get_positive_number(n);
	while (nb / 10 != 0)
	{
		nb /= 10;
		count++;
	}
	return (count + 2);
}

char	*ft_itoa(int n)
{
	char			*res;
	unsigned int	nb;
	int				dg;

	dg = get_digit_count(n);
	res = malloc((dg) * sizeof(char));
	if (!res)
		return (NULL);
	res[--dg] = '\0';
	nb = get_positive_number(n);
	while (nb / 10 != 0)
	{
		res[--dg] = (nb % 10) + '0';
		nb /= 10;
	}
	res[--dg] = nb + '0';
	if (dg == 1)
		res[--dg] = '-';
	return (res);
}
