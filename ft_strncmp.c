/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpfanner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 16:10:47 by qpfanner          #+#    #+#             */
/*   Updated: 2019/04/09 16:11:35 by qpfanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t		i;
	unsigned char	*s1;
	unsigned char	*s2;
	i = 0;
	s1 = (unsigned char*)str1;
	s2 = (unsigned char*)str2;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s1[i] == s2[i] && i < (n - 1))
		i++;
	return (s1[i] - s2[i]);
}
