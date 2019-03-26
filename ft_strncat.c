#include "libft.h"

char	*ft_strncat(char *str1, const char *str2, size_t n)
{
	char *tmp;

	tmp = str1;
	while (*tmp != '\0')
		tmp++;
	while (*str2 != '\0' && n > 0)
	{
		*tmp = *str2;
		tmp++;
		str2++;
		n--;
	}
	*tmp = '\0';
	return (str1);
}
