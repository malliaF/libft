/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpfanner <qpfanner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 15:40:16 by qpfanner          #+#    #+#             */
/*   Updated: 2019/05/16 17:05:25 by qpfanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*ft_memchr(const void *str, int c, size_t n)
{
	size_t				i;
	unsigned char		ch;
	const unsigned char	*str2;

	i = 0;
	ch = (unsigned char)c;
	str2 = (const unsigned char*)str;
	while (i < n)
	{
		if (str2[i] == ch)
			return (&((void*)str)[i]);
		i++;
	}
	return (NULL);
}
