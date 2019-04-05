#include "libft.h"

/*
Функция strdup дублирует строку, на которую указывает аргумент str.
Память под дубликат строки выделяется с помощью функции malloc
*/
char	*ft_strdup(const char *str)
{
	char *tmp;

	tmp = (char*)malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (tmp == NULL)
		return (NULL); //если не удалось выделить память под новую строку или скопировать строку, на которую указывает аргумент str
	return (ft_strcpy(tmp, str)); //указатель на дублирующую строку
}