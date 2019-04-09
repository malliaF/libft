/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpfanner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 16:04:23 by qpfanner          #+#    #+#             */
/*   Updated: 2019/04/09 16:08:31 by qpfanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *substr, size_t n)
{
	size_t lensub;

	lensub = ft_strlen(substr);
	if (*substr == '\0')
		return ((char*)str);
	while (*str != '\0' && n-- >= lensub)
	{
		if (*str == *substr && ft_memcmp(str, substr, lensub) == 0)
			return ((char*)str);
		str++;
	}
	return (NULL);
}
