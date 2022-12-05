/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kparadis <je73@hotmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 13:16:05 by kparadis          #+#    #+#             */
/*   Updated: 2022/12/03 02:09:11 by kparadis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The strnstr() function locates the first occurrence
of the null-terminated string little in the string big,
where not more than len characters are searched.
Characters that appear after a '\0' character are
not searched. Since the strnstr() function is a FreeBSD
specific API, it should only be used when portability is
not a concern.*/

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	if (!little[0])
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		if (ft_strncmp(little, big + i, ft_strlen(little)) == 0 && i
			+ ft_strlen(little) <= len)
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
