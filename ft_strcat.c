#include "libft.h"

char	*ft_strcat(char *str1, const char *str2)
{
	char *s1;
	char *s2;

	s1 = str1;
	s2 = (char*)str2;
	while (*s1 != '\0')
		s1++;
	while (*s2 != '\0')
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	*s1 = '\0';
	return (str1);
}	
