/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpfanner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 15:19:08 by qpfanner          #+#    #+#             */
/*   Updated: 2019/04/09 15:22:23 by qpfanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{	
	size_t		i;
	unsigned char	ch;
	unsigned char	*ptr;

	i = 0;
	ch = (unsigned char)c;
	ptr = (unsigned char*)str;
	while (i < n)
	{
		ptr[i] = ch;
		i++;
	}
	return (str);
}
