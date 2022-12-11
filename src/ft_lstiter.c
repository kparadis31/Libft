/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kparadis <je73@hotmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 21:07:43 by kparadis          #+#    #+#             */
/*   Updated: 2022/12/10 02:05:04 by kparadis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Itère sur la liste ’lst’ et applique la fonction
’f’ au contenu chaque élément.*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
