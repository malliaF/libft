/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashafedotova <mashafedotova@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/06 18:13:49 by mashafedoto       #+#    #+#             */
/*   Updated: 2019/03/06 18:36:55 by mashafedoto      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
    size_t i;
    unsigned char *to;
    unsigned char *from;

    i = 0;
    to = (unsigned char*)dst;
    from = (unsigned char*)src;
    while (i < n)
    {
        to[i] = from[i];
        if (from[i] == (unsigned char)c)
            return (dst + i + 1);
        i++;
    }
    return (NULL);
}