#include "libft.h"

char	*ft_strdup(const char *str)
{
	char *tmp;

	tmp = (char*)malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (tmp == NULL)
		return (NULL);
	return (ft_strcpy(tmp, str));
}
