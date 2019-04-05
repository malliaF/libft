#include "libft.h"

/*
Функция strstr ищет первое вхождение строки (за исключением символаконца строки),
на которую указывает аргумент substr, в строку, на которую указывает аргумент 
str.
Если строка substr имеет нулевую длину, то функция вернет указатель на начало 
строки str.
*/
char	*ft_strstr(const char *str, const char *substr)
{
	return (ft_strnstr(str, substr, ft_strlen(str)));
}