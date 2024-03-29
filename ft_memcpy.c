/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpfanner <qpfanner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 15:23:07 by qpfanner          #+#    #+#             */
/*   Updated: 2019/06/07 21:04:33 by qpfanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dst2;
	const unsigned char	*src2;

	i = 0;
	if (!dst && !src)
		return (NULL);
	dst2 = (unsigned char*)dst;
	src2 = (const unsigned char*)src;
	while (i < n)
	{
		dst2[i] = src2[i];
		i++;
	}
	return (dst);
}