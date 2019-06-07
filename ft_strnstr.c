/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpfanner <qpfanner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 16:04:23 by qpfanner          #+#    #+#             */
/*   Updated: 2019/06/07 20:56:39 by qpfanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *substr, size_t n)
{
	size_t lensub;
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	lensub = ft_strlen(substr);
	if (substr[j] == '\0')
		return ((char*)str);
	while (str[i] != '\0' && n-- >= lensub)
	{
		if (str[i] == substr[j] && ft_memcmp(str + i, substr + j, lensub) == 0)
			return ((char*)str + i);
		i++;
	}
	return (NULL);
}
