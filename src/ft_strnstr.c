/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kparadis <je73@hotmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 13:16:05 by kparadis          #+#    #+#             */
/*   Updated: 2022/11/26 19:37:18 by kparadis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The strnstr() function locates the first occurrence
of the null-terminated string petit in the string big,
where not more than len characters are searched.
Characters that appear after a '\0' character are
not searched. Since the strnstr() function is a FreeBSD
specific API, it should only be used when portability is
not a concern.*/

#include "libft.h"

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t  i;
    size_t  j;

    i = 0;
    

    if ()
}