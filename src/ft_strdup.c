/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kparadis <je73@hotmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 13:15:32 by kparadis          #+#    #+#             */
/*   Updated: 2022/12/02 22:53:51 by kparadis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*ette fonction permet de dupliquer une chaîne de caractères.
la fonction strdup alloue une nouvelle zone de mémoire 
via la fonction malloc afin d'y copier la chaîne de
caractères initiale. Il est donc impératif de libérer
cette zone de mémoire après utilisation via la fonction
free.*/

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (str == NULL)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
