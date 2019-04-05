#include "libft.h"

/*
Функция memcmp побайтно сравнивает две области памяти, на которые
указывают аргументы str1 и str2. Сравнение продолжается, пока не будет
проверено n байт или пока не встретятся отличающиеся байты.
*/
int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t i;
	unsigned char *s1;
	unsigned char *s2;

	i = 0;
	s1 = (unsigned char*)str1;
	s2 = (unsigned char*)str2;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]); // если встретился отличающийся байт
			/*
			Положительное число, если str1[i] > str2[i]
			Отрицательное число, если str1[i] < str2[i]
			*/
		i++;
	}
	return (0); // если сравниваемые массивы одинаковые
} 