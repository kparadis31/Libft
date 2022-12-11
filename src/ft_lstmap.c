/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kparadis <je73@hotmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 21:13:12 by kparadis          #+#    #+#             */
/*   Updated: 2022/12/10 02:26:07 by kparadis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Itère sur la liste ’lst’ et applique la fonction
’f ’au contenu de chaque élément. Crée une nouvelle
liste résultant des applications successives de
’f’. La fonction ’del’ est là pour détruire le
contenu d’un élément si nécessaire.*/

#include "libft.h"

static t_list	*ft_newlst(t_list *new_lst, t_list *lst, void *(*f)(void *),
		void (*del)(void *))
{
	t_list	*add;

	add = ft_lstnew(f(lst->content));
	if (add == NULL)
	{
		ft_lstclear(&new_lst, del);
		return (NULL);
	}
	ft_lstadd_back(&new_lst, add);
	return (new_lst);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;

	if (lst == NULL)
		return (NULL);
	new_lst = ft_lstnew(f(lst->content));
	if (new_lst == NULL)
		return (NULL);
	lst = lst->next;
	while (lst)
	{
		ft_newlst(new_lst, lst, f, del);
		lst = lst->next;
	}
	return (new_lst);
}
