/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kparadis <je73@hotmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 01:23:10 by kparadis          #+#    #+#             */
/*   Updated: 2022/12/03 19:20:04 by kparadis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*string passed in the parameter.The portion begins at the index parameter
*of start and will have the length of the parameter len.If start and len do*
	not designate a portion of a valid string the behavior is undefined.If the
		* memory allocation fails the function will return NULL.*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;

	if (!s)
		return (0);
	if (ft_strlen(s) < start)
		len = 0;
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	ret = malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (0);
	ft_strlcpy(ret, s + start, len + 1);
	return (ret);
}
