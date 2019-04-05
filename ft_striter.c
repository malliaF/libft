/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpfanner <qpfanner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 12:53:05 by qpfanner          #+#    #+#             */
/*   Updated: 2019/04/05 13:09:24 by qpfanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Applies the function f to each character of the string passed
as argument. Each character is passed by address to f to be
modified if necessary.
*/
void    ft_striter(char *s, void (*f)(char *))
{
    if (s != NULL && f != NULL)
        while (*s && s != NULL)
            f(s++);
}