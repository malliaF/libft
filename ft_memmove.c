#include "libft.h"

/*
Функция memmove копирует n байт из области памяти, на который указывает
src, в область памяти, на которую указывает dst. Области памяти могут пересекаться.
Функция возвращает указатель на область памяти dst (в которую скопированы данные).
*/
void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t i;

	i = 0;
	if (dst < src) // если области памяти не пересекаются, то делает то же, что и memcpy
	{
		while (i < n)
		{
			((char*)dst)[i] = ((char*)src)[i];
			i++;
		}
	}
	else if (dst > src) // если области памяти пересекаются, то memmove копирует src в dst
	{
		while (n > 0)
		{
			n--;
			((char*)dst)[n] = ((char*)src)[n];
		}
	}
	return (dst);
}