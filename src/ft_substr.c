/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kparadis <je73@hotmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 01:23:10 by kparadis          #+#    #+#             */
/*   Updated: 2022/12/08 01:36:02 by kparadis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*string passed in the parameter.The portion begins at the index parameter
*of start and will have the length of the parameter len.If start and len do*
	not designate a portion of a valid string the behavior is undefined.If the
		* memory allocation fails the function will return NULL.*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	int		i;

	if (start >= ft_strlen(s))
	{
		res = malloc(1);
		res[0] = '\0';
		return (res);
	}
	if (len >= ft_strlen(s))
		len = ft_strlen(s);
	res = (char *)malloc((len + 1) * sizeof(char));
	if (!res || !s)
		return (NULL);
	i = 0;
	while (s[start + i] != '\0' && i < (int)len)
	{
		res[i] = s[start + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
