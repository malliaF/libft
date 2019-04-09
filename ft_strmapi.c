/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashafedotova <mashafedotova@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 14:16:18 by qpfanner          #+#    #+#             */
/*   Updated: 2019/04/09 07:26:21 by mashafedoto      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*This function is exactly the same as ft_strmap except that when we run
	 * our given function f on the character we also pass to f the specific
	 * index of our character in the given string. Review ft_strmap in order
	 * to understand how this function works.*/
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int    i;
    char            *newstr;

    i = 0;
    if (s == NULL || f == NULL)
        return (NULL);
    newstr = ft_strdup((const char *)s);
    if (newstr)
    {
        while (newstr[i] != '\0')
        {
            newstr[i] = f(i, s[i]);
            i++;
    }   
    newstr[i] = '\0';
    }
    return (newstr);
}