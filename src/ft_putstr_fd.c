/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kparadis <je73@hotmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:28:49 by kparadis          #+#    #+#             */
/*   Updated: 2022/12/05 16:50:33 by kparadis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*This function is exactly the same as our ft_putstr function except that we
 * are requiring a file descriptor in the parameter along with the desired
 * string to be to be written. As we do in our ft_putchar_fd function, we use
 * a file descriptor obtained from the open system call, or we can use 0, 1, or
 * 2, to refer to the standard input, standard output, or standard error. We
 * use the fd parameter as the first parameter in our write function. We then
 * place our string as write's next parameter. Last we use ft_strlen on our
 * string so we know how many bytes will need to be written, which is the same
 * as the length of the given string. Write will then write string s to the
 * desired output.*/

#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	write(fd, s, ft_strlen(s));
}
