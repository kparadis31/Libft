/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kparadis <je73@hotmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:11:43 by kparadis          #+#    #+#             */
/*   Updated: 2022/12/05 16:14:14 by kparadis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Applique la fonction ’f’ à chaque caractère de la
chaîne de caractères transmise comme argument,
et en passant son index comme premier argument.
Chaque caractère est transmis par adresse à ’f’
afin d’être modifié si nécessaire.*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}
