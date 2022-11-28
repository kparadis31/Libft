/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kparadis <je73@hotmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 13:15:38 by kparadis          #+#    #+#             */
/*   Updated: 2022/11/15 12:50:57 by kparadis         ###   ########.fr       */
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

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	l;
	size_t	i;

	l = ft_strlen(src);
	i = 0;
	while (i < dstsize - 1 && *src != '\0')
	{
		*dst++ = *src++;
		i++;
	}
	*dst = '\0';
	return (l);
}
