/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kparadis <je73@hotmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 18:33:17 by kparadis          #+#    #+#             */
/*   Updated: 2022/11/15 12:36:48 by kparadis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Cette fonction permet de copier un bloc de
mémoire spécifié par le paramètre source
dans un nouvel emplacement désigné par le
paramètre destination. On peut
donc dire que cette fonction est proche
de la fonction memcpy. Néanmoins, la différence
réside dans le fait que la fonction memmove accepte
que les deux zones de mémoire puissent se chevaucher.
En cas de chevauchement, la copie se passe comme
si les octets de la zone source étaient d'abord copiés
dans une zone temporaire, qui ne chevauche aucune des
deux zones pointées par source et destination,
et les octets sont ensuite copiés de la zone temporaire
vers la zone de destination.*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*csrc;
	char	*cdst;

	cdst = dst;
	csrc = (char *)src;
	if (csrc < cdst)
	{
		cdst += len - 1;
		csrc += len - 1;
		while (len--)
		{
			*cdst = *csrc;
			cdst--;
			csrc--;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
