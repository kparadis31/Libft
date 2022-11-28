/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kparadis <je73@hotmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 17:38:21 by kparadis          #+#    #+#             */
/*   Updated: 2022/11/15 12:32:15 by kparadis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Cette fonction permet de copier un bloc de mémoire
spécifié par le paramètre source, et
dont la taille est spécifiée via le paramètre
size, dans un nouvel emplacement
désigné par le paramètre destination.
Il est bien entendu qu'il est de votre responsabilité
d'allouer suffisamment de mémoire pour le bloc
de destination afin qu'il puisse
contenir toutes les données.
En cas de chevauchement des deux blocs
de mémoire (source et destination) le
comportement de la fonction memcpy n'est
pas garanti. Dans ce cas, veuillez
préférer l'utilisation de la fonction memmove.
Attention, contrairement à strcpy, aucun
test sur une éventuelle valeur nulle n'est
réalisé pour stopper la copie.
Seule la taille du bloc sera considérée.
*/

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*csrc;
	char	*cdst;

	if (dst == NULL && src == NULL)
		return (0);
	i = 0;
	csrc = (char *)src;
	cdst = (char *)dst;
	while (i < n)
	{
		cdst[i] = csrc[i];
		i++;
	}
	return (dst);
}
