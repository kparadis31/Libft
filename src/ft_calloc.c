/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kparadis <je73@hotmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 13:14:45 by kparadis          #+#    #+#             */
/*   Updated: 2022/12/02 23:06:04 by kparadis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Cette fonction alloue un bloc de mémoire en initialisant
ous ces octets à la valeur 0. Bien que relativement proche
de la fonction malloc, deux aspects les différencient :
L'initialisation : calloc met tous les octets du bloc
à la valeur 0 alors que malloc
ne modifie pas la zone de mémoire.
Les paramètres d'appels : calloc requière deux paramètres
(le nombre d'éléments consécutifs à allouer et la taille d'un élément)
alors que malloc attend la taille totale du bloc à allouer.*/

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*memory;
	size_t	i;

	i = 0;
	memory = malloc(count * size);
	if (!memory)
		return (NULL);
	ft_bzero(memory, count * size);
	return (memory);
}
