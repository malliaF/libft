/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashafedotova <mashafedotova@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 16:02:08 by qpfanner          #+#    #+#             */
/*   Updated: 2019/05/25 20:23:33 by mashafedoto      ###   ########.fr       */
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