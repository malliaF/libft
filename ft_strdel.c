/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpfanner <qpfanner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 12:27:19 by qpfanner          #+#    #+#             */
/*   Updated: 2019/04/05 12:29:52 by qpfanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Takes as a parameter the address of a string that need to be
freed with free(3), then sets its pointer to NULL.
*/
void    ft_strdel(char **as)
{
    ft_memdel((void**)as);
}