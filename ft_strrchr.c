/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpfanner <qpfanner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 16:02:08 by qpfanner          #+#    #+#             */
/*   Updated: 2019/06/07 19:57:22 by qpfanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t i;
	char ch;
	char *res;

	i = 0;
	ch = (char)c;
	res = NULL;
	while (str[i] != '\0')
	{
		if (str[i] == ch)
			res = &((char*)str)[i];
		i++;
	}
	if (str[i] == ch)
		res = &((char*)str)[i];
	return (res);
}