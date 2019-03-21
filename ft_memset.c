/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashafedotova <mashafedotova@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/05 20:09:27 by mashafedoto       #+#    #+#             */
/*   Updated: 2019/03/05 20:09:54 by mashafedoto      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
    char    *ptr;

    ptr = (char*)str;
    while (n > 0)
    {
        ptr[n - 1] = c;
        n--;
    }
    return (str);
}