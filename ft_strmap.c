/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpfanner <qpfanner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 14:02:47 by qpfanner          #+#    #+#             */
/*   Updated: 2019/04/05 14:20:01 by qpfanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Applies the function f to each character of the string given as argument 
to create a “fresh” new string (with malloc(3)) resulting from the successive applications of f.
*/
char    *ft_strmap(char const *s, char (*f)(char))
{
    int    i;
    char   *newstr;

    i = 0;
    if (s == NULL)
    {
        if (NULL == (newstr = ft_memalloc(ft_strlen(s) + 1)))
            return (NULL);
        while (s[i])
            {
                newstr[i] = f(s[i]);
                i++;
            }
        newstr[i] = '\0';
        return (newstr);
    }
    return (NULL);
}