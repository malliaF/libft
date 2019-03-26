#include "libft.h"

size_t	ft_strlcat(char *str1, const char *str2, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (str1[i] != '\0' && i < n)
		i++;
	while (str2[j] != '\0' && ((i + j + 1) < n))
	{
		str1[i + j] = str2[j];
		j++;
	}
	if (i != n)
		str1[i + j] = '\0';
	return (i + ft_strlen(str2));
}
