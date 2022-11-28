/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kparadis <je73@hotmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 13:15:54 by kparadis          #+#    #+#             */
/*   Updated: 2022/11/15 13:03:19 by kparadis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Cette fonction permet de comparer deux chaînes de caractères
et de savoir si la première est inférieure, égale
ou supérieure à la seconde. Cette comparaison sera faite
dans l'ordre lexicographique (et donc, en tenant
compte des valeurs ASCII des différents caractères comparés).
Néanmoins la comparaison se fera au maximum sur les
length premiers caractères.*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && i < n - 1 && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
