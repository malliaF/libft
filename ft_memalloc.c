/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpfanner <qpfanner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 12:09:42 by qpfanner          #+#    #+#             */
/*   Updated: 2019/04/05 12:17:13 by qpfanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Выделяет с помощью malloc память и инициализирует ее к \0 с помощью bzero.
*/
void    *ft_memalloc(size_t size)
{
    void    *memory;

    memory = malloc(size);
    if (memory == NULL)
        return (NULL); // возвращает NULL при фэйле
    ft_bzero(memory, size); // инициализирует выделенную память к нулям
    return (memory);
}