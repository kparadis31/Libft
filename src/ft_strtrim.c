/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kparadis <je73@hotmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 14:20:09 by kparadis          #+#    #+#             */
/*   Updated: 2022/12/08 02:00:36 by kparadis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Alloue (avec malloc(3)) et retourne une copie de
la chaîne ’s1’, sans les caractères spécifiés
dans ’set’ au début et à la fin de la chaîne de
caractères.*/

#include "libft.h"

static int	is_in(char const *set, char c)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

static int	get_size(char const *s, char const *set)
{
	int	size;
	int	i;

	size = 0;
	i = 0;
	while (is_in(set, s[i]))
		i++;
	while (s[i + size])
		size++;
	while (size && is_in(set, s[i + size - 1]))
		size--;
	return (size + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		i;
	int		j;
	int		size;

	if (!s1 || !set)
		return (NULL);
	size = get_size(s1, set);
	res = malloc(size * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	while (is_in(set, s1[i]))
		i++;
	while (j < size - 1)
		res[j++] = s1[i++];
	res[j] = '\0';
	return (res);
}
