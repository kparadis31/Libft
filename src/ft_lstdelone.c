/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kparadis <je73@hotmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 21:00:45 by kparadis          #+#    #+#             */
/*   Updated: 2022/12/10 02:07:39 by kparadis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Libère la mémoire de l’élément passé en argument en utilisant la fonction 
del puis avec	free(3). La mémoire de next ne doit pas être free. */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL)
		return ;
	if (lst->content)
	{
		del(lst->content);
		free(lst);
	}
}
