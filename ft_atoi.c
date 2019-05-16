/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpfanner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 14:48:01 by qpfanner          #+#    #+#             */
/*   Updated: 2019/05/05 18:27:52 by qpfanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\r' ||
			c == '\v' || c == '\n' || c == '\f')
		return (1);
	else
		return (0);
}

int			ft_atoi(const char *str)
{
	unsigned long int	result;
	int					sign;
	int					i;

	result = 0;
	sign = 1;
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
		if (result >= 9223372036854775807 && sign == 1)
			return (-1);
		if (result >= 9223372036854775807 && sign == -1)
			return (0);
	}
	return (result * sign);
}
