#include "libft.h"

char    *ft_strsub(char const *s, unsigned int start, size_t len)
{
    char    *str;

    if (!s || !(str = ft_strnew(len)))
        return (NULL);
    return (ft_strncpy(str, s + start, len));
}