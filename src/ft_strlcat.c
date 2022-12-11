/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kparadis <je73@hotmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 13:15:38 by kparadis          #+#    #+#             */
/*   Updated: 2022/12/08 01:49:30 by kparadis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*La fonction concatène les chaînes dst et src
 et place le résultat dans la chaîne dst.
 Contrairement à la fonction strcat(), strlcat()
 garantie que la longueur totale de la chaîne
 résultat sera comprise entre la longueur initiale de
 dst et size. Le zéro de fin de chaîne est compatibilisé.
 Cette fonction sert principalement à éviter les dépassement
 de taille du tableau de caractères.*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	j;
	size_t	k;

	j = 0;
	k = 0;
	while (dst[j] && j < size)
		j++;
	while ((src[k]) && ((j + k + 1) < size))
	{
		dst[j + k] = src[k];
		k++;
	}
	if (j != size)
		dst[j + k] = '\0';
	return (j + ft_strlen(src));
}
