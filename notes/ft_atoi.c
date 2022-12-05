/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kparadis <je73@hotmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 13:14:35 by kparadis          #+#    #+#             */
/*   Updated: 2022/11/29 21:39:31 by kparadis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Cette fonction permet de transformer une chaîne de caractères,
représentant une valeur entière, en une valeur numérique de type
int Le terme d'atoi est un acronyme signifiant : ASCII to integer.*/

#include "libft.h"

int ft_atoi(const char *str)
{
	long long	nb;
	int	sign;
    int	i;

    i = 0;
    sign = 1;
    while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' ||
                    str[i] == '\f' || str[i] '\r' || str[i] == ' ')
            i++;
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign = -1;
		i++;
    }
    while (ft_isdigit(str[i]))
    {
        nb = (nb * 10) + (str[i] - '0');
                                          /*while sur les caracteres tant que c'est des nombres/*
        


        // '4' == 52 
        // 52 - '0' = 4
        
        // str[i] == '1' == 49
        // str[i] == '3' == 51
        // '0' == 48
        // '1' == 49
        // str[i] == '1' == 49 
        // '1' - '0' == 49 - 48 = 1

        i++; 
    }

    // nb = 0
    // 947
    // nb = 9
    // 
    // nb * 10 = 9 * 10 = 90
    //  90 + 4 = 94
    // 
    // nb * 10 = 94 * 10 = 940
    //  940 + 7 = 947

    return (nb * sign);
}