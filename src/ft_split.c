/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kparadis <je73@hotmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:06:42 by kparadis          #+#    #+#             */
/*   Updated: 2022/12/08 01:52:48 by kparadis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Alloue (avec malloc(3)) et retourne un tableau
de chaînes de caractères obtenu en séparant ’s’ à
l’aide du caractère ’c’, utilisé comme délimiteur.
Le tableau doit être terminé par NULL.*/

#include "libft.h"

static int	get_word_count(const char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count + 1);
}

static char	*get_next_word(int *pos, const char *s, char c)
{
	int		len;
	char	*word;
	int		i;

	len = 0;
	i = 0;
	while (s[*pos] == c)
		(*pos)++;
	while (s[*pos + len] && s[*pos + len] != c)
		len++;
	word = malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (i < len)
		word[i++] = s[(*pos)++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		wc;
	char	**words;
	int		i;
	int		pos;

	if (!s)
		return (NULL);
	wc = get_word_count(s, c);
	words = malloc(wc * sizeof(char *));
	if (!words)
		return (NULL);
	i = 0;
	pos = 0;
	while (i < wc - 1)
		words[i++] = get_next_word(&pos, s, c);
	words[i] = 0;
	return (words);
}
