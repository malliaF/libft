/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpfanner <qpfanner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 15:36:59 by qpfanner          #+#    #+#             */
/*   Updated: 2019/05/21 21:52:56 by qpfanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dst2;
	const unsigned char	*src2;

	i = 0;
	dst2 = (unsigned char*)dst;
	src2 = (const unsigned char*)src;
	if (dst2 < src2)
	{
		while (i < n)
		{
			dst2[i] = src2[i];
			i++;
		}
	}
	else if (dst2 > src2)
	{
		while (n > 0)
		{
			n--;
			dst2[n] = src2[n];
		}
	}
	return (dst);
}