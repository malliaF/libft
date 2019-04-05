#include "libft.h"

size_t	ft_strlcat(char *dst, const char *append, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (dst[i] != '\0' && i < n)
		i++;
	while (append[j] != '\0' && ((i + j + 1) < n))
	{
		dst[i + j] = append[j];
		j++;
	}
	if (i != n)
		dst[i + j] = '\0';
	return (i + ft_strlen(append));
}