#include "libft.h"

/*
Функция strrchr ищет последнее вхождение символа c в строке,
на которую указывает аргумент str.
*/
char	*ft_strrchr(const char *str, int c)
{
	char *strrev;

	strrev = (char*)str + ft_strlen(str); //пришли в последний элемент нашего str
	while (*strrev != c)
	{
		if (strrev == str) //дошли до начала строки и ничего не нашли? тогда возвращаем NULL
			return (NULL);
		strrev--;
	}
	return (strrev);
}