/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpfanner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 16:02:08 by qpfanner          #+#    #+#             */
/*   Updated: 2019/04/09 16:03:04 by qpfanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char *strrev;

	strrev = (char*)str + ft_strlen(str);
	while (*strrev != c)
	{
		if (strrev == str)
			return (NULL);
		strrev--;
	}
	return (strrev);
}
