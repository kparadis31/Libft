/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kparadis <je73@hotmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 13:15:06 by kparadis          #+#    #+#             */
/*   Updated: 2022/11/24 22:26:05 by kparadis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Cette fonction permet de comparer le contenu de deux blocs de mémoire
spécifiés par les deux premiers paramètres de la fonction.
Le troisième paramètre, size, permet de spécifier le nombre d'octets
sur lequel comparer les deux blocs. Les octets des
deux blocs sont comparés deux à deux. 
Tant que les deux octets comparés sont égaux, la fonction 
passe aux deux suivants. Si les deux octets comparés sont différents,
alors la fonction renvérra lequel des deux blocs est le plus petit en
termes de contenus*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s1 + i) != *(unsigned char *)(s2 + i))
			return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
		i++;
	}
	return (0);
}
