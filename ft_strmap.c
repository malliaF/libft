/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpfanner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 17:40:09 by qpfanner          #+#    #+#             */
/*   Updated: 2019/04/09 17:41:54 by qpfanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*newstr;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	newstr = ft_strdup((const char *)s);
	if (newstr)
	{
		while (newstr[i] != '\0')
		{
			newstr[i] = f(s[i]);
			i++;
		}
		newstr[i] = '\0';
	}
	return (newstr);
}
