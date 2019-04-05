/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpfanner <qpfanner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 12:23:55 by qpfanner          #+#    #+#             */
/*   Updated: 2019/04/05 12:26:28 by qpfanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Allocates (with malloc(3)) and returns a “fresh” string ending with ’\0’. 
Each character of the string is initialized at’\0’. 
If the allocation fails the function returns NULL.
*/
char    *ft_strnew(size_t size)
{
    return ((char*)ft_memalloc(size + 1));
}