/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashafedotova <mashafedotova@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/06 16:36:37 by mashafedoto       #+#    #+#             */
/*   Updated: 2019/03/06 16:40:03 by mashafedoto      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i;
    char *to;
    char *from;

    i = 0;
    to = (char*)dst;
    from = (char*)src;
    while (i < n)
    {
        to[i] = from[i];
        i++;
    }
    return (dst);
}
