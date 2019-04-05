#include "libft.h"

/* 
Функция bzero заполняет n байтов той области памяти, на которую указывает str, 
нулями. Возвращает указатель на область памяти str.
 */
void    ft_bzero(void *str, size_t n)
{
    ft_memset(str, 0, n);
}