/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kparadis <je73@hotmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 17:22:35 by kparadis          #+#    #+#             */
/*   Updated: 2022/11/15 12:25:59 by kparadis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The bzero() function places len zero-valued
bytes in the area pointed to by b.*/

#include "libft.h"

void	ft_bzero(void *b, size_t len)
{
	unsigned char	*s;
	size_t			i;

	s = (unsigned char *)b;
	i = 0;
	while (i < len)
		s[i++] = 0;
}
