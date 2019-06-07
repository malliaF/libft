/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpfanner <qpfanner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 15:43:55 by qpfanner          #+#    #+#             */
/*   Updated: 2019/06/07 19:44:00 by qpfanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t				i;
	const unsigned char	*s1;
	const unsigned char	*s2;

	i = 0;
	s1 = (const unsigned char*)str1;
	s2 = (const unsigned char*)str2;
	if (n == 0)
		return (0);
	while (i < (n-1) && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
