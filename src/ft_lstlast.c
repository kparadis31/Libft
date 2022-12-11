/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kparadis <je73@hotmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 23:34:57 by kparadis          #+#    #+#             */
/*   Updated: 2022/12/10 00:24:14 by kparadis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Renvoie le dernier élément de la liste.*/

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst)
	{
		while (lst->next)
			lst = lst->next;
	}
	return (lst);
}
