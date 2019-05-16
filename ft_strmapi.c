/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpfanner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 17:42:37 by qpfanner          #+#    #+#             */
/*   Updated: 2019/05/04 18:13:02 by qpfanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*newstr;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	newstr = ft_strdup((const char *)s);
	if (newstr)
	{
		while (newstr[i] != '\0')
		{
			newstr[i] = f(i, s[i]);
			i++;
		}
		newstr[i] = '\0';
	}
	return (newstr);
}
