#include "libft.h"

static unsigned	ft_count_words(char const *s, char c)
{
	unsigned	i;
	unsigned	word;

	i = 0;
	while (*s)
	{
		word = 0;
		while (*s && *s == c)
			s++;
		s--;
		while (*++s && *s != c)
			word = 1;
		i += word;
	}
	return (i);
}

static char		*ft_get_word(const char **s, char c)
{
	char	*start;
	char	*res;

	while (**s && **s == c)
		(*s)++;
	start = (char *)*s;
	while (**s && **s != c)
		(*s)++;
	res = ft_strsub(start, 0, *s - start + 1);
	res[*s - start] = 0;
	return (res);
}

char			**ft_strsplit(char const *s, char c)
{
	unsigned	words;
	unsigned	i;
	char		**res;

	if (!s)
		return (NULL);
	words = ft_count_words(s, c);
	if ((res = (char **)malloc(sizeof(char *) * words + 1)))
	{
		i = 0;
		while (i < words)
			res[i++] = ft_get_word(&s, c);
		res[i] = NULL;
	}
	return (res);
}