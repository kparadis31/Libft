/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kparadis <je73@hotmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 13:16:27 by kparadis          #+#    #+#             */
/*   Updated: 2022/11/15 12:56:15 by kparadis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Cette fonction permet de convertir une lettre
minuscule à une lettre majuscule.*/

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}
