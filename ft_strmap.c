/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashafedotova <mashafedotova@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 14:02:47 by qpfanner          #+#    #+#             */
/*   Updated: 2019/04/09 07:26:23 by mashafedoto      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*This functin applies the given function f to each character of the given
 * string in order to create a new string that is the result of have function
 * f run on string s. It will return a 'fresh' copy of the modified string*/
char    *ft_strmap(char const *s, char (*f)(char))
{
    size_t  i;
    char   *newstr;

     /*Next we allocate the memory necessary to make a copy of the modified 
	 * string we want to return. We use our ft_strlen function on the given
	 * string and make sure to add 1 to it to compensate for the terminating 
	 * '\0'. If the allocation fails we return NULL. Otherwise we continue.*/
    i = 0;
    if (s == NULL || f == NULL)
        return (NULL);
    newstr = ft_strdup((const char *)s);
    if (newstr)
    {
        while (newstr[i] != '\0')
        {
            newstr[i] = f(s[i]);
            i++;
        }
        newstr[i] = '\0';
    }
    return (newstr);
}