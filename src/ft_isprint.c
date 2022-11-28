/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kparadis <je73@hotmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:11:09 by kparadis          #+#    #+#             */
/*   Updated: 2022/11/15 12:08:54 by kparadis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Cette fonction permet de tester si un caractère
s'affiche (is printable) ou non.*/

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
