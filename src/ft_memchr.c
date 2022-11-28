/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kparadis <je73@hotmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 13:14:59 by kparadis          #+#    #+#             */
/*   Updated: 2022/11/23 22:30:07 by kparadis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Recherche la première occurence d'une valeur typée int,
mais interprétée en tant que char, dans un bloc de mémoire.
Comme on traite un bloc de mémoire et non pas une chaîne
de caractères AZT (à zéro terminal), nous devons
aussi spécifier à la fonction la taille du bloc
de mémoire dans lequel réaliser la recherche*/

#include "libft.h"

void	*ft_memchr(const void *buffer, int c, size_t len)
{
	size_t			i;
	unsigned char	*s;

	s = (unsigned char *)buffer;
	i = 0;
	while (i < len)
	{
		if (s[i] == (unsigned char)c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}
