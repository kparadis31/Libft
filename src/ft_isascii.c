/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kparadis <je73@hotmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 14:41:49 by kparadis          #+#    #+#             */
/*   Updated: 2022/11/15 12:06:29 by kparadis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Test for Character Representable as
ASCII Value */
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
