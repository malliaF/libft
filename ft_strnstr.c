#include "libft.h"

/*
Функция strnstr ищет первое вхождение строки (за исключением символаконца строки),
на которую указывает аргумент substr, в строку, на которую указывает аргумент 
str, проверяя только n символов.
Если строка substr имеет нулевую длину, то функция вернет указатель на начало 
строки str.
*/
char	*ft_strnstr(const char *str, const char *substr, size_t n)
{
	size_t lensub;

	lensub = ft_strlen(substr);
	if (*substr == '\0')
		return ((char*)str);
	while (*str != '\0' && n-- >= lensub)
	{
		if (*str == *substr && ft_memcmp(str, substr, lensub) == 0)
			return ((char*)str);
		str++;
	}
	return (NULL);
}	