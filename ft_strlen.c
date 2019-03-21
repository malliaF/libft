/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashafedotova <mashafedotova@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/06 16:31:24 by mashafedoto       #+#    #+#             */
/*   Updated: 2019/03/06 16:33:06 by mashafedoto      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  *ft_strlen(const char *str)
{
    long    i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return ((size_t*)i);
}