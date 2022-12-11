/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kparadis <je73@hotmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 03:34:00 by kparadis          #+#    #+#             */
/*   Updated: 2022/12/08 03:35:21 by kparadis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Ajoute l’élément ’new’ au début de la liste.*/

#include "libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (alst && new)
	{
		new->next = *alst;
		*alst = new;
	}
}
