/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpfanner <qpfanner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 12:23:55 by qpfanner          #+#    #+#             */
/*   Updated: 2019/05/04 17:48:45 by qpfanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	if (size + 1 == 0)
		return (NULL);
	return ((char*)ft_memalloc(size + 1));
}
