#include "libft.h"
/* 
Функция memset находится в библиотеке string.h. Она заполняет первые
n байтов той области памяти, на которую указывает str, 
постоянным байтом c. Возвращает указатель на область памяти str.
 */

void	*ft_memset(void *str, int c, size_t n)
{
//Создаем указатель на char. Сюда будет сохраняться значение void *str.
    char    *ptr;

//Наш стринг равен первому аргументу. Переводим void* в char*
    ptr = (char*)str;
//Начинаем цикл. Он продолжается пока мы не пройдем всю переданную аргументом длину n
    while (n > 0)
    {
        ptr[n - 1] = c;//Идем в последнюю ячейку array и приравниваем значение нашего стринга переданному символу
        n--;
    }
    return (str);//Хз, но видимо так как *ptr это указатель на *str, то значения *str тоже меняются и мы можем вернуть уже их
}