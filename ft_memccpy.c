/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpfanner <qpfanner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 15:30:41 by qpfanner          #+#    #+#             */
/*   Updated: 2019/05/16 17:06:54 by qpfanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t					i;
	unsigned char			ch;
	unsigned char			*dst2;
	const unsigned char		*src2;

	i = 0;
	ch = (unsigned char)c;
	dst2 = (unsigned char*)dst;
	src2 = (const unsigned char*)src;
	while (i < n)
	{
		dst2[i] = src2[i];
		if (src2[i] == ch)
			return (&dst[i + 1]);
		i++;
	}
	return (NULL);
}
