/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpfanner <qpfanner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 13:14:44 by qpfanner          #+#    #+#             */
/*   Updated: 2019/04/05 14:01:25 by qpfanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Applies the function f to each character of the string passed as argument, 
and passing its index as first argument. 
Each character is passed by address to f to be modified if necessary.
*/
void    ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    int i;

    i = 0;
    if (s != NULL && f != NULL)
        while (s[i] && s != NULL)
        {
            f(i, &s[i]);
            i++;
        }
}