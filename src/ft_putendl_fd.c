/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kparadis <je73@hotmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:53:09 by kparadis          #+#    #+#             */
/*   Updated: 2022/12/05 16:57:29 by kparadis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*This function writes the string s to the file descriptor fd followed by a
 * '\n' to make a new line. This function is exactly the same as our ft_putendl
 * function except that we take in a parameter for the file descriptor. We will
 * use our ft_putstr_fd and ft_putchar_fd functions to make this function work.
 * Please review ft_putstr_fd and ft_putchar_fd to understand the inner
 * workings of this function.*/

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
