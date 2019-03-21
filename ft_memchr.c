/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashafedotova <mashafedotova@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/06 18:39:47 by mashafedoto       #+#    #+#             */
/*   Updated: 2019/03/06 18:42:48 by mashafedoto      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *str, int c, size_t n)
{
    unsigned char *s;
    size_t i;

    i = 0;
    s = (unsigned char*)str;
    while (i < n)
    {
        if (s[i] == (unsigned char)c)
            return (s + i);
        i++;
    }
    return (NULL);
}