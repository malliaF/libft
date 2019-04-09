#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*start;

	if (!s)
		return (NULL);
	while (*s == ' ' || *s == '\t' || *s == '\n')
		s++;
	if (!*s)
		return (ft_strnew(0));
	start = (char *)s;
	while (*s)
		s++;
	s--;
	while (*s == ' ' || *s == '\t' || *s == '\n')
		s--;
	return (ft_strsub(start, 0, s - start + 1));
}