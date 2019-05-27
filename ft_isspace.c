#include "libft.h"

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\r' ||
			c == '\v' || c == '\n' || c == '\f')
		return (1);
	else
		return (0);
}