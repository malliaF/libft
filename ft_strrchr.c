#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char *s;

	s = (char*)str + ft_strlen(str);
	while (*s != c)
	{
		if (s == str)
			return (NULL);
		s--;
	}
	return (s);
}
