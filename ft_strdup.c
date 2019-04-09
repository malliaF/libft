/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpfanner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 15:52:22 by qpfanner          #+#    #+#             */
/*   Updated: 2019/04/09 15:53:45 by qpfanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char *tmp;

	tmp = (char*)malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (tmp == NULL)
		return (NULL);
	return (ft_strcpy(tmp, str));
}
