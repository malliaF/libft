#include "libft.h"

/*
Функция strchr ищет первое вхождение символа, код которого указан
в аргументе c, в строке, на которую указывает аргумент str.
*/
char	*ft_strchr(const char *str, int c)
{
	while (*str != c)
	{
		if (*str == '\0')
			return (NULL); //если дошли до конца строки символ не найден, возвращаем NULL
		str++;
	}
	return ((char*)str); // возвращаем указатель на символ
}