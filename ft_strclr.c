/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpfanner <qpfanner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 12:30:48 by qpfanner          #+#    #+#             */
/*   Updated: 2019/04/05 13:00:46 by qpfanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Sets every character of the string to the value ’\0’.
*/
void    ft_strclr(char  *s)
{
    if (s != NULL)
    {
        while (*s)
        {
            *s = '\0';
            *s++;
        }
    }
}