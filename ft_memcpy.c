#include "libft.h"

/* 
Находится в библиотеке string.h. Функция memcpy копирует n байт из 
области памяти src в область памяти dst. Области памяти не должны перекрываться
(||src - dst|| >= n). Если они пересекаются использовать memmove.
Возвращает указатель на dst.
*/
void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i;

    i = 0;
    while (i < n)
    {
        ((char*)dst)[i] = ((char*)src)[i];
        i++;
    }
    return (dst);
}